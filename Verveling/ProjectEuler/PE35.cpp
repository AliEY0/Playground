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
const int N = 1000000;
vector<int> primes;
void init(){

vector<bool> is_prime(N+1, true);
is_prime[0] = is_prime[1] = false;
for (int i = 2; i <= N; i++) {
    if (is_prime[i] && (long long)i * i <= N) {
        for (int j = i * i; j <= N; j += i)
            is_prime[j] = false;
        }
    }
    for(int i = 2; i <= N; i++)
        if(is_prime[i])
            primes.push_back(i);
}
bool check(int n){
    int logH = 1, logT = 0;
    int copy =  n;
    int rem = 0;
    while(copy > 0){
        if((copy%10)%2==0) return false;
        logH*=10, logT++;
        copy/=10;
    }
    logH/=10;
    for(int i = 0;i < logT; i++){
        int achter = n % 10;
        if(!(count(primes.begin(), primes.end(), n)))
            return false;
        n = logH * achter + n / 10;
    }
    


    return true;
}

int main(){
    clock_t tStart = clock();
    init();
    int ans = 1; //2 is inbegrepen
    for(int i = 3; i <= N; i++)
        if(check(i))
            ans++;
    cout << ans << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




