
// https://iq.opengenus.org/factorial-of-large-numbers/

#include <iostream>

using namespace std;
const int MAX = 500;
int multiplyX(int x, int ans[], int size) {
  int carry = 0;

  for (int i = 0; i < size; i++) {
    int product = ans[i] * x + carry;
    ans[i] = product % 10;
    carry = product / 10;
  }

  while (carry) {
    ans[size] = carry % 10;
    carry /= 10;
    size++;
  }
  return size;
}

int factorial(int n) {
  int ans[MAX];
  ans[0] = 1;
  int size = 1;
  for (int i = 2; i <= n; i++)
    size = multiplyX(i, ans, size);
  int somDigits = 0;
  for (int i = size - 1; i >= 0; i--)
    somDigits += ans[i];
  return somDigits;
}

int main() {
  cout << factorial(100) << "\n";
  return 0;
}
