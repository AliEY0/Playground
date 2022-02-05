#include <iostream>
#include <map>
using namespace std;

int main() {
  int ans = 0, streak = 0;
  auto max = [](int a, int b) { return (a > b ? a : b); };
  map<long long, long long> m;
  m[1] = 1;
  for (long long j = 2; j <= 1000000; j++) {
    long long tel = 0;
    long long i = j;
    while (i != 1) {
      if (i & 1)
        i = i * 3 + 1;
      else
        i /= 2;
      tel++;
      if (m.count(i)) {
        tel += m[i];
        m[j] = tel;
        break;
      }
    }
    if (m[j] > streak) {
      streak = m[j];
      ans = j;
    }
  }
  cout << ans << "\n";
  return 0;
}
