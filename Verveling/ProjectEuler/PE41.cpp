#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

using namespace std;

#define ll long long


bool isPrime(int n){
    if(n <= 1)
        return false;
    if(n == 2)
        return true;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int nPrime(int n){
    int arr[n];
    int ans = 0;
    for(int i = 1;i <= n; i++)
        arr[i - 1] = i;

    sort(arr, arr + n);
    reverse(arr, arr + n);
            
    do {
        if(arr[n - 1] % 2 == 0) continue;
        int som  = 0;
        for(int i = 0; i < n; i++){
            som = (som * 10) + arr[i];
        }
        if(isPrime(som))
            ans = max(ans, som);
    } while (prev_permutation(arr, arr + n));
    
    return ans;
}

int main(){
    int ans = 0;
    for(int i = 1; i <= 9; i++)
        ans = max(ans, nPrime(i));
    cout << ans << "\n";    
    return 0;
}




