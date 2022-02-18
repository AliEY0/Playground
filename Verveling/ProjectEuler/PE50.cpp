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
    if(n <= 1)
        return false;
    if(n == 2)
        return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int main(){
    clock_t tStart = clock();
    int l = 0, ans = 0;;
    const int N = 1000000;
    vector<int> primes;
    for(int i = 2; i < N; i++)
        if(isPrime(i))
            primes.push_back(i);
    int n = primes.size();
    for(int i = 0; i < n; i++){
        int som = primes[i];
        for(int j = i + 1; j < n; j++){
            som += primes[j];
            if(som > N)
                break;
            if(isPrime(som)){
                int len = j - i + 1;
                if(len > l)
                    l = len, ans = som;
            }
        }
    }
        
    cout << ans << "\n";
    
    
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




