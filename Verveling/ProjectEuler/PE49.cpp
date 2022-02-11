#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n) {
  // N is sws groter dan 2
  for (int i = 2; i * i <= n; i++)
    if (n % i == 0)
      return false;
  return true;
}

bool checkPermutation(int a, int b) {
  vector<int> val(10, 0);
  while (a > 0) {
    val[a % 10]--;
    a /= 10;
  }

  while (b > 0) {
    val[b % 10]++;
    b /= 10;
  }
  for (int i = 0; i < 10; i++)
    if (val[i] != 0)
      return false;
  return true;
}

bool Search() {

  vector<int> primes;
  for (int i = 1488; i < 10000; i++)
    if (isPrime(i))
      primes.push_back(i);
  for (int i = 0; i < primes.size(); i++) {
    for (int j = i + 1; j < primes.size(); j++) {
      for (int k = j + 1; k < primes.size(); k++) {
        if (primes[i] + primes[k] == 2 * primes[j] &&
            (checkPermutation(primes[i], primes[j]) &&
             checkPermutation(primes[j], primes[k]))) {
          cout << primes[i] << primes[j] << primes[k] << "\n";
          return true;
        }
      }
    }
  }
  cout << "stop\n";

  return false;
}

int main() {
  Search();
  return 0;
}
