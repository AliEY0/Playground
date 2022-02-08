#include <iostream>

using namespace std;

bool isReversible(int n) {
  if (n % 10 == 0)
    return false;
  int som = 0, copy = n;
  while (n > 0) {
    som = 10 * som + (n % 10);
    n /= 10;
  }
  int twee = copy + som;
  while (twee > 0) {
    if ((twee % 10) % 2 == 0)
      return false;
    twee /= 10;
  }

  return true;
}

int main() {
  int tel = 0;
  for (int i = 1; i <= 1000000000; i++)
    if (isReversible(i))
      tel++;
  cout << tel << "\n";
  return 0;
}
