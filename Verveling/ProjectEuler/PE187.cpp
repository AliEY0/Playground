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

bool isPrime(int n){
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main(){
    clock_t tStart = clock();

    vector<int> primes;
    int i =2;
    const int N = 100000000;
    while(i < (N - 1) / 2){
        if(isPrime(i))
            primes.push_back(i);
        i++;
    }
    int n = primes.size();
    set<int> val;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ll product = primes[i] * primes[j];
            if(1LL*primes[i] * primes[j] < N)val.insert(product);
            else break;//tel++;
        }
    }
    
    cout << val.size()<< "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




