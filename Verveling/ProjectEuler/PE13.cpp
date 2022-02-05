#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> numbers(100);

  for (int i = 0; i < 100; i++)
    cin >> numbers[i];
  vector<int> val(60, 0);

  for (int i = 10; i < 60; i++) {
    for (int j = 0; j < 100; j++) {
      val[i] = val[i] + (numbers[j][i - 10] - '0');
    }
  }

  for (int i = 60; i >= 1; i--) {
    while (val[i] >= 10) {
      val[i - 1]++;
      val[i] -= 10;
    }
  }
  int ten = 0;
  //  for (int i = 9; i < 18; i++)  ten = ten * 10 + val[i];
  int i = 0;
  while (val[i] == 0)
    i++;

  for (int j = i; j < i + 10; j++)
    cout << val[j];
  cout << "\n";
  return 0;
}
