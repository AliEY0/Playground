#include <iostream>

using namespace std;

int Oplossing(int x) {
  const int ROW = 101;
  const int COL = 305;
  int arr[ROW][COL];

  for (int i = 0; i < ROW; i++)
    for (int j = 0; j < COL; j++)
      arr[i][j] = 0;
  arr[0][COL - 1] = 1;
  for (int i = 1; i < ROW; i++) {
    for (int j = COL - 1; j > 1; j--) {
      if (arr[i - 1][j] != 0)
        arr[i][j] += arr[i - 1][j] * x;
      // arr[i][j]++;
      while (arr[i][j] >= 10) {
        arr[i][j] -= 10;
        arr[i][j - 1]++;
      }
    }
  }
  int ans = 0;
  for (int i = 0; i < ROW; i++) {
    int som = 0;
    for (int j = 0; j < COL; j++)
      som += arr[i][j];
    if (som > ans)
      ans = som;
  }
  return ans;
}

int main() {
  int ans = 0;
  auto max = [](int a, int b) { return (a > b ? a : b); };
  for (int i = 1; i < 100; i++)
    ans = max(ans, Oplossing(i));
  cout << ans << "\n";
  return 0;
}
