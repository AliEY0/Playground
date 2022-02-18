#include <iostream>

using namespace std;

int som(int n) { return n * (n + 1) / 2; }
int main() {

  int n = 10;
  cout << som(n) << "\n"; // 1 + 2 + ... + 10 == 55
  return 0;
}
