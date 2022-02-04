#include <iostream>
#include <ostream>

using namespace std;

int main() {
  int prevtwo = 0;
  int prevone = 1;
  int cur = prevtwo + prevone;
  int ans = 0;

  while (cur <= 4000000) {
    if (!(cur & 1))
      ans += cur;
    prevtwo = prevone;
    prevone = cur;
    cur = prevone + prevtwo;
  }

  cout << ans << endl;

  return 0;
}
