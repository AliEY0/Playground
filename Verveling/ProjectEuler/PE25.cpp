#include <array>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<vector<int>> arr(10000, vector<int>(10000, 0));

  arr[0][9999] = 0;
  arr[1][9999] = 1;

  for (int i = 2; i <= 9999; i++) {
    for (int j = 9999; j >= 10; j--) {
      arr[i][j] += arr[i - 1][j] + arr[i - 2][j];
      while (arr[i][j] >= 10) {
        arr[i][j - 1]++;
        arr[i][j] -= 10;
      }
    }
  }

  for (int i = 0; i <= 9999; i++) {
    for (int j = 9980; j <= 9999; j++) {
      int val = 0;
      for (int k = 0; k <= 9999; k++) {
        if (arr[i][k] != 0) {
          val = k;
          break;
        }
      }
      // cout << i << " -> " << 9999 - val << "\n";
      if (9999 - val + 1 == 1000) {
        cout << i << "\n";
        return 0;
      }
    }
  }

  return 0;
}
