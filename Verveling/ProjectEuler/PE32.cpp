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

bool isPandigital(int n){
    vector<int> dig(10);

    while(n > 0){
        dig[n % 10]++;
        n/=10;
    }
    if(dig[0]>0)return false; 
    for(int i = 1; i < 10; i++)
        if(dig[i] > 1 || dig[i] == 0)
            return false;
    return true;
}

int add(int a, int b){
    int l10 = 10;
    while(l10 < b)
        l10*=10;
    a*=l10;
    a+=b;
    return a;
}

bool solve(int n){
    
    for(int i = 2; i * i <= n; i++){
        if(n / i != i&&(n % i == 0)){
            int q = n / i;
            int pan = add(add(i, q), n);
            if(isPandigital(pan)==1){
                return true;
            }
        }
    }
    return false;
}

int main(){
    clock_t tStart = clock();
    ll som = 0;
    const int N = 10000;    
    for(int i = 1; i <= N; i++){
        if(solve(i)){
            som += i;
        }
    }
    cout << som << "\n";
    printf("\nTime taken: %.14fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




