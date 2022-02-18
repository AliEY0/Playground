#include <iostream>

using namespace std;

bool isPrime(int n) {
  if (n <= 1)
    return false;
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}

double check(int N) {

  const int Length = N * 2 + 1;
  double total = 1;
  double primes = 0;
  for (int i = 1; i <= N; i++) {
    int odd = 2 * i + 1;
    int val1 = (odd * odd) - 2 * i;
    int val2 = (odd * odd) - 4 * i;
    int val3 = (odd * odd) - 6 * i;
    if (isPrime(val1))
      primes++;

    if (isPrime(val2))
      primes++;
    if (isPrime(val3))
      primes++;
    total += 4;
  }

  return primes / total;
}

int main() {
  int i = 1;
  // int i = 10000;
  // int i = 11000;
  // int i = 12000;
  // int i = 13000;

  while (check(i) >= 0.10)
    i++;
  cout << i * 2 + 1 << "\n";

  return 0;
}
