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
#include <time.h>
using namespace std;
#define ll long long
int mod = 1000000007;
 
//https://cses.fi/paste/5c863034548e868a285d1a/
 
 
 
int main()
{
  int n = 8, target = 200;
  vector<int> x = {1, 2, 5, 10, 20, 50, 100, 200};
 
  vector<vector<int>> dp(n+1,vector<int>(target+1,0));
  dp[0][0] = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= target; j++) {
      dp[i][j] = dp[i-1][j];
      int left = j-x[i-1];
      if (left >= 0) {
	(dp[i][j] += dp[i][left]) %= mod;
      }
    }
  }
  cout << dp[n][target] << endl;
 
 
 
 
 
}
 
 
