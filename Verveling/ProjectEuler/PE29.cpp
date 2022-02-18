#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define ll long long



  set<string> val;
void Oplossing(int x) {
    const int ROW = 100;
  const int COL = 205;
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
      
      if (arr[i][j] >= 10) {
        arr[i][j - 1]+=(arr[i][j]/10);
        arr[i][j] %= 10;
      }
    }
  }
  for (int i = 0; i < ROW; i++) {
    string s = "";
    for (int j = 0; j < COL; j++)
        s += (arr[i][j]  + '0');
    val.insert(s);
  }
}

int main() {
  for(int i = 2; i <= 100; i++)
      Oplossing(i);
  cout << val.size() << "\n";
  return 0;
}




