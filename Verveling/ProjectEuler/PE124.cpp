#include <bits/stdc++.h>

using namespace std;


long long int productPrimeFactors(int n)
{
    long long int product = 1;
    if (n % 2 == 0) {
        product *= 2;
        while (n % 2 == 0)
            n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        if (n % i == 0) {
            product = product * i;
            while (n % i == 0)
                n = n / i;
        }
    }

    if (n > 2)
        product = product * n;

    return product;
}
int main()
{
    // Source - https://stackoverflow.com/a (voor sorteer algorithme)



    int n = 100000;
    int ans = 10000;
    vector<pair<int, int>> vpii;
    vpii.push_back({0,0});
    for(int i = 1; i <= n; i++){
        vpii.push_back({i, productPrimeFactors(i)});
        //cout << i << " : " << productPrimeFactors(i) << "\n";
    }
    std::sort(vpii.begin(), vpii.end(), [](auto &left, auto &right) {
        return left.second < right.second;
    });

    cout << ans << " : " << vpii[ans-1].first << " " << vpii[ans-1].second << "\n";
    cout << vpii.size();
    return 0;
}


