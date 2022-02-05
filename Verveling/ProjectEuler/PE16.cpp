#include <iostream>
#include <vector>
using namespace std;

int main() {
  const int N = 1000;
  vector<vector<int>> powerTwo(N + 1, vector<int>(N, 0));

  powerTwo[0][N] = 1;

  for (int i = 1; i <= N; i++) {
    for (int j = N; j >= 0; j--) {
      if (powerTwo[i - 1][j] == 0)
        continue;
      powerTwo[i][j] += 2 * powerTwo[i - 1][j];
      while (powerTwo[i][j] >= 10) {
        powerTwo[i][j] -= 10;
        powerTwo[i][j - 1]++;
      }
    }
  }
  int ans = 0;

  for (int i = 0; i <= N; i++)
    ans += powerTwo[1000][i];
  cout << ans << "\n";
  return 0;
}
