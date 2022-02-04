#include <iostream>

using namespace std;

long long ggd(long long a, long long b) {
  if (b == 0)
    return a;

  return ggd(b, a % b);
}

long long kgv(long long a, long long b) { return a * b / (ggd(a, b)); }

int main() {

  long long ans = 1;

  for (int i = 2; i <= 20; i++)
    ans = kgv(ans, i);

  cout << ans << "\n";
}
