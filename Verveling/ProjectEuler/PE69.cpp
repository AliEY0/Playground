#include <algorithm>
#include <iostream>
using namespace std;

int isPrime(int n) {
  if (n <= 1)
    return false;
  if (n == 2)
    return true;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}

int main() {

  // Weinig factoren
  int arr[50];
  int q = 0, i = 0;
  while (q < 50) {
    if (isPrime(i)) {
      arr[q] = i;
      q++;
    }
    i++;
  }

  int ans = 1;

  for (int i = 0; ans * arr[i] <= 1000000; i++)
    ans *= arr[i];
  cout << ans << "\n";

  return 0;
}
