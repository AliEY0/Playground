#include <iostream>
#include <ostream>
using namespace std;

int LargestPrimeFactor(long long val) {
  auto max = [](int a, int b) { return (a > b ? a : b); };
  int ans = 0;
  for (long long i = 2; i * i <= val; i++) {
    if (val % i == 0) {
      while (val % i == 0) {
        val /= i;
      }
      ans = max(ans, i);
    }
  }

  if (val > 1)
    ans = max(ans, val);
  return ans;
}

int main() {

  const long long N = 600851475143;
  cout << LargestPrimeFactor(N) << endl;
  return 0;
}
