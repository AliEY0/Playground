#include <iostream>
#include <map>
using namespace std;

int numDivisors(int n) {
  map<int, int> m;
  // https://stackoverflow.com/questions/1443793/iterate-keys-in-a-c-map

  for (int i = 2; i * i <= n; i++) {
    while (n % i == 0) {
      m[i]++;
      n /= i;
    }
  }
  if (n > 1)
    m[n]++;
  int ans = 1;
  for (const auto &myPair : m) {
    ans *= (m[myPair.first] + 1);
  }
  return ans;
}

int triangularNumber(int n) { // triangularNumber(n) = 1 + 2 + ... n
  return n * (n + 1) / 2;
}

int main() {
  int i = 1, triNumber = numDivisors(triangularNumber(i));
  while (triNumber <= 500) {
    i++;
    triNumber = numDivisors(triangularNumber(i));
  }
  cout << triangularNumber(i) << "\n";
  return 0;
}
