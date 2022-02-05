#include <iostream>

using namespace std;

long long solve(int left, int right) {
  long long ans = 0;
  auto isPrime = [](int n) {
    if (n < 2)
      return false;
    for (int i = 2; i * i <= n; i++)
      if (n % i == 0)
        return false;
    return true;
  };
  for (int i = left; i <= right; i++)
    if (isPrime(i))
      ans += i;

  return ans;
}

int main() {
  cout << solve(1, 2000000) << "\n";
  return 0;
}
