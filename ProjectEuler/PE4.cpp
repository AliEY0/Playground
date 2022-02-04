
#include <iostream>
#include <ostream>
using namespace std;
bool checkPalindrome(int n) {
  int copyVal = n;

  int val = 0;

  while (copyVal > 0) {
    val = val * 10 + copyVal % 10;
    copyVal /= 10;
  }

  while (n > 0) {
    if (n % 10 != val % 10)
      return false;
    n /= 10, val /= 10;
  }
  return true;
}

int solve() {
  int ans = 0;
  auto max = [](int a, int b) { return (a > b ? a : b); };
  for (int i = 999; i >= 100; i--) {
    for (int j = 999; j >= 100; j--) {
      if (checkPalindrome(i * j))
        ans = max(ans, i * j);
    }
  }
  return ans;
}

int main() {

  cout << solve() << endl;
  return 0;
}
