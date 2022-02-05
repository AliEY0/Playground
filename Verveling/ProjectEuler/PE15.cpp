#include <iostream>

using namespace std;

int main() {
  const int N = 20;
  long long paths[N + 1][N + 1];

  for (int i = 0; i <= N; i++)
    paths[0][i] = 1;

  for (int i = 0; i <= N; i++)
    paths[i][0] = 1;
  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      paths[i][j] = paths[i - 1][j] + paths[i][j - 1];
    }
  }
  /*
    for (int i = 0; i <= N; i++) {
      for (int j = 0; j <= N; j++)
        cout << paths[i][j] << " ";
      cout << "\n";
    }
  */

  cout << paths[N][N] << "\n";
  return 0;
}
