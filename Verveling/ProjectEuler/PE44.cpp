#include <cstdint>
#include <iostream>
#include <math.h>
using namespace std;
bool isPentagonal(long long n) {

  long long x1 = (1 + sqrt(1 + (1LL * 24 * n))) / 6;
  long long val = (x1 * (3 * x1 - 1)) / 2;
  if ((3 * x1 * x1 - x1) / 2 == n)
    return true;

  return false;
}

int main() {
  const int N = 10000;
  long long pentagon[N];

  for (int i = 0; i < N; i++)
    pentagon[i] = 1LL * i * (3 * i - 1) / 2;
  auto min = [](int a, int b) { return (a < b ? a : b); };

  int ans = INT32_MAX;
  for (int i = 1; i < N; i++) {
    for (int j = 1; i != j && j < N; j++) {
      if (isPentagonal(pentagon[i] + pentagon[j]) &&
          isPentagonal(abs(pentagon[j] - pentagon[i]))) {
        cout << abs(pentagon[j] - pentagon[i]) << "\n";
        return 0;
      }
    }
  }
  return 0;
}
