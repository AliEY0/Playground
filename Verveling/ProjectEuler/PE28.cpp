#include <iostream>

using namespace std;

int main() {
  const int N = 500;
  long long ans = 1;
  for (int i = 1; i <= N; i++) {
    long long n = 2 * i + 1;
    // cout << ((n * n)) << " ";
    ans = ans + 1LL * (4 * n * n) - (12 * i);
    // ans = ans + (n * n);
    // ans = ans + (n * n - 2 * i);
    // ans = ans + (n * n - 4 * i);
    // ans = ans + (n * n - 6 * i);
  }
  cout << ans << "\n";

  return 0;
}
