#include <iostream>

using namespace std;

#define ll __int128
const long long MOD = 10000000000;
// https://stackoverflow.com/questions/25114597/how-to-print-int128-in-g
std::ostream &operator<<(std::ostream &dest, __int128_t value) {
  std::ostream::sentry s(dest);
  if (s) {
    __uint128_t tmp = value < 0 ? -value : value;
    char buffer[128];
    char *d = std::end(buffer);
    do {
      --d;
      *d = "0123456789"[tmp % 10];
      tmp /= 10;
    } while (tmp != 0);
    if (value < 0) {
      --d;
      *d = '-';
    }
    int len = std::end(buffer) - d;
    if (dest.rdbuf()->sputn(d, len) != len) {
      dest.setstate(std::ios_base::badbit);
    }
  }
  return dest;
}

ll binpow(ll a, ll b) {
  ll ans = 1;
  while (b > 0) {
    if (b & 1)
      (ans *= a) %= MOD;

    (a *= a) %= MOD;
    b /= 2;
  }
  return ans;
}

ll mul(ll a, ll b) { return ((a % MOD) * (b % MOD)) % MOD; }

int main() {
  ll val = binpow(2, 7830457);
  cout << mul(val, 28433) + 1 << "\n";
  return 0;
}
