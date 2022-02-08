#include <iostream>
#include <set>
#include <string>
using namespace std;

bool isPalindromic(int x) {
  string s = to_string(x);
  int l = 0, r = s.length() - 1;
  while (l <= r) {
    if (s[l] != s[r])
      return false;
    l++, r--;
  }
  return true;
}

int main() {

  unsigned long long ansSum = 0;
  const int N = 10000;
  int squares[N];
  int ans = 0;
  for (int i = 1; i <= N; i++)
    squares[i - 1] = i * i;
  set<int> val;
  for (int i = 0; i < N; i++) {
    int som = squares[i];
    for (int j = i + 1; j < N; j++) {
      som += squares[j];
      if (som >= 100000000)
        break;
      if (!val.count(som) && isPalindromic(som)) {
        ans++;
        ansSum += som;
        val.insert(som);
        // cout << som << "\n";
      }
    }
  }

  cout << ansSum << "\n";

  return 0;
}
