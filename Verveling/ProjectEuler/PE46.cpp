#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
bool isPrime(int n) {
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}
int main() {
  int j = 0;
  vector<int> primes;
  for (int i = 2; j < 10000; i++) {
    if (isPrime(i)) {
      primes.push_back(i);
      j++;
    }
  }

  for (int i = 37;; i += 2) {
    bool found = false;
    for (int j = 0; j < primes.size(); j++) {
      if (primes[j] > i)
        continue;
      int n = sqrt((i - primes[j]) / 2); // algebra
      if (primes[j] + 2 * (n * n) == i)
        found = true;
    }
    if (!found) {
      cout << i << "\n";
      break;
    }
  }
  return 0;
}
