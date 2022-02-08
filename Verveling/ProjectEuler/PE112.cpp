#include <iostream>
#include <string>

using namespace std;

bool isBouncy(int n) {
  string s = to_string(n);
  bool laag = true;
  bool hoog = true;
  for (int i = 0; i < s.length() - 1; i++) {
    if (s[i] - '0' < s[i + 1] - '0')
      laag = false;
    if (s[i] - '0' > s[i + 1] - '0')
      hoog = false;
  }
  return (!hoog && !laag);
}

int main() {

  int aantalBouncy = 0;
  for (int i = 10;; i++) {
    if (isBouncy(i))
      aantalBouncy++;
    double val = (double)aantalBouncy / i * 100;
    if (val == 99) {
      cout << i << "\n";
      break;
    }
  }
  return 0;
}
