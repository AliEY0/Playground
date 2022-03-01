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
//Voor Meer informatie
//https://cp-algorithms.com/algebra/sieve-of-eratosthenes.html

bool isPrime(int n){
    if(n < 2)
        return false;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
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

int main(){
    //Kleine Test
    /*int n = 10;
    vector<int> primeNumbers = sieve(n); //Priemgetallen < 10
    for(int i = 0 ;i < primeNumbers.size(); i++)
        cout << primeNumbers[i] << "\n";
    */
    //Test2
    /*
    for(int i = 0 ;i <10; i++){
        if(isPrime(i))
            cout << i << "\n";
    }
    */
    return 0;
}




