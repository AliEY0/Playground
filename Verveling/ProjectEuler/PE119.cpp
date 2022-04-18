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
#include <time.h>

using namespace std;
#define ll unsigned long long
const int MOD = 1000000007;
const int MX = 1000005;//1e6+5
set<pair<ll, ll>> pairs;
ll SumDigits(ll n){
    ll sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
ll binpow(ll a, ll b){
    ll res = 1;
    //calulate a^b = a * a * ... * a(b times) 
    while(b > 0){
        if(b&1){
            (res *= a);
        }
        (a*=a);
        b>>=1;
    }
    return res;
}
int main(){
    
    clock_t tStart = clock();
    for(ll i = 1; i <= 100; i++){
        for(ll j = 1; j  <= 10; j++){
            ll val = binpow(i, j);
            if(val > 9)
            pairs.insert({i, val});
        }
    }
    vector<ll> ans;
    for(auto x : pairs){
        if(SumDigits(x.second) == x.first){
            ans.push_back(x.second);
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans[30 - 1] << "\n"; 
    printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

    return 0;
}

