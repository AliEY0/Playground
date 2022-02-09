#include <cmath>
#include <iostream>

using namespace std;

// https://math.stackexchange.com/questions/1656686/how-many-rectangles-can-be-observed-in-the-grid#:~:text=Number%20of%20rectangles%20are%20%3Dm,%C3%975%2F4%3D30.

int main() {
  const int RANGE = 2000000;
  int ans = 100000000;
  int ansA = 0;
  for (int x = 1; x <= 2022; x++) {
    for (int y = 1; y <= 2022; y++) {
      int val = (x * (x + 1) * y * (y + 1)) / 4;
      if (abs(RANGE - val) < ans) {
        ans = abs(RANGE - val);
        ansA = x * y;
      }
    }
  }
  cout << ansA << "\n";
  return 0;
}
