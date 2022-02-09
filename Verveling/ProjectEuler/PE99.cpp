#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
// properties of log -> log10(a^b) = b * log10(a)
int main() {
  int valI = 0;
  long double val = 0;
  for (int i = 1; i <= 1000; i++) {
    long double x, y;
    cin >> x >> y;
    long double calc = (long double)y * (long double)log10((long double)x);
    if (calc > val) {
      val = calc;
      valI = i;
    }

    // cout << x << " ^ " << y << " = " << calc << "\n";
  }
  cout << valI << "\n";
  return 0;
}
