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

#define ll long long
const int MOD = 1e9+7;
ll binpow(ll a, ll b){
    ll res = 1;
    //calulate a^b = a * a * ... * a(b times) 
    while(b > 0){
        if(b&1){
            (res *= a) %= MOD;
        }
        (a*=a)%=MOD;
        b>>=1;
    }
    return res % MOD;
}


int main(){
    //clock_t tStart = clock();
    int t;
    cin >> t;
    while(t--){
        ll a, b;
        cin >> a >> b;
        cout << binpow(a, b) << "\n";
    }

    
    //printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




