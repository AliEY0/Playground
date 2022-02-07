#include <iostream>
#include <map>
using namespace std;

int lengthRecurringCycle(int n) {
  int begin = 1;
  int tel = 0;
  map<int, int> m;
  while (m[begin] == 0 && begin != 0) {
    m[begin] = tel;
    begin *= 10;
    begin = begin % n;
    tel++;
  }
  return tel;
}

int main() {
  int ans = 0, getal = 0;
  for (int i = 1; i <= 1000; i++) {
    if (lengthRecurringCycle(i) > ans) {
      ans = lengthRecurringCycle(i);
      getal = i;
    }
  }

  cout << ans << "\n";

  return 0;
}
