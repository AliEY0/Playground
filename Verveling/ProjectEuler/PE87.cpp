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
//https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html 
//(priem sieve)
vector<int> init(int n){
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
int main(){
    clock_t tStart = clock();
    const int LIMIT = 50000000;
    vector<int> primes = init(LIMIT);
    vector<int> squared;
    vector<int> cubed;
    vector<int> biquadrate;
    int n = primes.size();
    set<int> sums;
    for(int i = 0; i < n; i++){
        int val = primes[i] * primes[i];
        if(val <= LIMIT) squared.push_back(val);
        else break;
    }
   
    for(int i = 0; i < n; i++){
        int val = primes[i] * primes[i] * primes[i];
        if(val <= LIMIT) cubed.push_back(val);
        else break;
    }

    for(int i = 0; i < n; i++){
        int val = primes[i] * primes[i] * primes[i] * primes[i];
        if(val <= LIMIT) biquadrate.push_back(val);
        else break;
    }
    int ans = 0;
    for(int i = 0; i < squared.size(); i++){
        for(int j = 0; j < cubed.size(); j++){
            for(int k = 0; k < biquadrate.size(); k++){
                int sum = squared[i] + cubed[j] + biquadrate[k];  
                if(sum <= LIMIT){
                    //ans++;
                    sums.insert(sum);
                }
            }
        }
    }
    //cout << ans << endl;
    cout << sums.size() << endl; //aantal verschillende optellingen 
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




