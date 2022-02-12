#include <iostream>
#include <math.h>
using namespace std;

bool isTriangular(long long n) {
  long long x1 = (-1 + sqrt(1 + (1LL * 8 * n))) / 2;
  long long val = (x1 * (x1 + 1) / 2);
  if (val == n)
    return true;

  return false;
}

bool isPentagonal(long long n) {

  long long x1 = (1 + sqrt(1 + (1LL * 24 * n))) / 6;
  long long val = (x1 * (3 * x1 - 1)) / 2;
  if ((3 * x1 * x1 - x1) / 2 == n)
    return true;

  return false;
}

int main() {
  const int N = 100000;
  long long arr[N];
  for (int i = 0; i < N; i++)
    arr[i] = 1LL * i * (2 * i - 1);
  // for (int x = 0; x < N; x++)
  //   cout << arr[x] << "\n";
  // 1533776805
  //  cout << "---" << isPentagonal(35) << "---\n";
  // cout << isTriangular(1533776805);
  // cout << "---" << isPentagonal(1533776805) << "---\n";
  for (int i = 144; i < N; i++) {
    if (isPentagonal(arr[i]) && isTriangular(arr[i]))
      cout << arr[i] << "\n";
    //  cout << (-1 + sqrt(1 + 8 * arr[i])) / 2 << "\n";
    //    break;
  }
  return 0;
}
