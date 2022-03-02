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



int concat(int a, int b){
    int times = 1;
    while (times <= b)
        times *= 10;
    return a*times + b;
}

bool validate(int a, int b){
    if(!isPrime(concat(a, b)))
        return false;
    
    if(!isPrime(concat(b, a)))
        return false;
    
    return true;
}
vector<int> sieve(int n){
    vector<bool> is_prime(n+1, true);
    vector<int> primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i)
                is_prime[j] = false;
        }
    }
    for(int i = 0; i < n; i++)
        if(is_prime[i])
            primes.push_back(i);
    return primes;
}
int solve(){
    const int M = 10000;
    vector<int> primes = sieve(M); 
    const int N = primes.size();
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(!validate(primes[i], primes[j]))
                continue;
            for(int k = j + 1; k < N; k++){
                if(!validate(primes[i], primes[j])) continue;
                if(!validate(primes[i], primes[k])) continue;
                if(!validate(primes[j], primes[k])) continue;
                for(int l = k + 1; l  < N; l++){    
                if(!validate(primes[i], primes[j])) continue;
                if(!validate(primes[i], primes[k])) continue;
                if(!validate(primes[i], primes[l])) continue;
                if(!validate(primes[j], primes[k])) continue;
                if(!validate(primes[j], primes[l])) continue;
                if(!validate(primes[k], primes[l])) continue;
                for(int m = l + 1; m < N; m++){
                
                //cout << primes[i] << " " <<  primes[j] << " " << primes[k] << " " << primes[l] << " "  << primes[m] << "\n";
                if(!validate(primes[i], primes[j])) continue;
                if(!validate(primes[i], primes[k])) continue;
                if(!validate(primes[i], primes[l])) continue;
                if(!validate(primes[i], primes[m])) continue;
                if(!validate(primes[j], primes[k])) continue;
                if(!validate(primes[j], primes[l])) continue;
                if(!validate(primes[j], primes[m])) continue;
        
                if(!validate(primes[k], primes[l])) continue;
                if(!validate(primes[k], primes[m])) continue;
                if(!validate(primes[l], primes[m])) continue;
               
                //cout << primes[i] << " " <<  primes[j] << " " << primes[k] << " " << primes[l] << " "  << primes[m] << "\n";
                return (primes[i] + primes[j] + primes[k] + primes[l] + primes[m]); 
                }  
                }
            }
        }
    }               
 
    return -1; //-1 = niet gevonden pas uw range aan (M)
}
int main(){
    clock_t tStart = clock();
    cout << solve() << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




