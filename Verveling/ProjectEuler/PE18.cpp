#include <iostream>

using namespace std;
/*
75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23

*/
int main() {
  const int N = 100;
  int val[N][N];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> val[i][j];
    }
  }
  cout << "---\n";
  int update[N][N];
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      update[i][j] = 0;
  for (int i = 0; i < N; i++)
    update[N - 1][i] = val[N - 1][i];

  auto max = [](int a, int b) { return (a > b ? a : b); };

  for (int i = N - 2; i >= 0; i--) {
    for (int j = 0; j <= i; j++) {
      update[i][j] =
          max(val[i][j] + update[i + 1][j], val[i][j] + update[i + 1][j + 1]);
      //  cout << "(" << i << ", " << j << ") ";
    }
    // cout << "\n";
  }

  cout << update[0][0] << "\n";
  return 0;
}
