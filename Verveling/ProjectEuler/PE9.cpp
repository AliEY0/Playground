#include <cmath>
#include <iostream>
using namespace std;

int solve() {

  for (int i = 1; i <= 1000; i++) {
    for (int j = 1; i + j < 999 && j <= 1000; j++) {
      int val = i * i + j * j;
      int sqVal = sqrt(val);
      if (sqVal * sqVal == val) {
        if (sqVal + i + j == 1000) {
          return sqVal * i * j;
        }
      }
    }
  }
  return -1;
}

int main() {
  cout << solve() << "\n";
  return 0;
}
