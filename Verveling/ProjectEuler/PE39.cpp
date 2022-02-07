#include <iostream>

using namespace std;

int main() {

  // a + b + c = p
  // a² + b² = c²
  // a² + b²  = (p - a - b)²

  int numberSolutions = 0, number = 0;

  for (int p = 1; p <= 1000; p++) {
    int tel = 0;
    for (int a = 1; a <= p; a++) {
      for (int b = a + 1; b <= p; b++) {
        if (a * a + b * b == (p - a - b) * (p - a - b)) {
          tel++;
        }
      }
    }
    if (tel > numberSolutions) {
      numberSolutions = tel;
      number = p;
    }
  }
  cout << numberSolutions << " " << number << "\n";

  return 0;
}
