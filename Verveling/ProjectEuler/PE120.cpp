#include <iostream>
using namespace std;

unsigned long long pow(int a, int b) {
  unsigned long long res = 1;

  for (int i = 1; i <= b; i++)

    res *= 1LL * a;
  return res;
}

void solvee() {
  int ans = 0;
  for (int i = 3; i <= 1000; i++) {
    ans += 2 * i * ((i - 1) / 2);
  }
  cout << ans << "\n";
}

int main() {

  // if n is even then remainder 2
  // if n is odd then remainder n / 2 * 4 + 2
  // expand the polynomial
  solvee();
  return 0;
}
