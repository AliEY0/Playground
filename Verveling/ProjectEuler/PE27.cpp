#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1)
    return false;
  if (n == 2)
    return true;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}

int function(int n, int a, int b) { return n * n + a * n + b; }

int main() {
  int ans = 0;
  int product = 0;
  for (int a = -999; a < 1000; a++) {
    for (int b = -1000; b <= 1000; b++) {
      for (int n = 0;; n++) {
        int val = function(n, a, b);
        if (!isPrime(val)) {
          if (ans < n) {
            ans = n;
            product = a * b;
          }
          break;
        }
      }
    }
  }

  cout << product << "\n";
  return 0;
}
