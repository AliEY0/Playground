#include <iostream>

using namespace std;

int som(int N) { // 1 + 2 + ... + n
  return N * (N + 1) / 2;
}

int somsom(int n) { // 1² + 2² + ... + n²
  return n * (n + 1) * (2 * n + 1) / 6;
}
int solve(int n) {
  int x = som(n);
  int z = somsom(n);
  return x * x - z;
}
int main() {
  int n = 100;
  cout << solve(n) << "\n";
  return 0;
}
