#include <iostream>
#include <ostream>

using namespace std;

int som(int n, int s) {

  int val = n / s;

  int sum = val * (val + 1) / 2;

  return sum * s;
}

int main() {
  const int SIZE = 1000 - 1; // onder 1000
  cout << som(SIZE, 3) + som(SIZE, 5) - som(SIZE, 15) << endl;
  return 0;
}
