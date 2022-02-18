#include <iostream>
#include <vector>
using namespace std;

bool isPrime(long long n) {
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}

// Kijk probleem 120;
// expand the expression

int main() {
  const int N = 30000; // GOK
  vector<long long> primes;
  long long i = 2, j = 0;
  while (j < N) {
    if (isPrime(i)) {
      j++;
      primes.push_back(i);
    }
    i++;
  }
  for (int i = 0; i < N; i++) {
    if (i % 2 == 0)
      continue;
    if (1LL * 2 * primes[i] * (i + 2) >= 10000000000) {
      cout << (i + 2) << "\n";
      break;
    }
  }
  return 0;
}
