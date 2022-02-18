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
        return true;
    for(int i = 2; i * i <= n; i++)
        if(n % i == 0)
            return false;
    return true;
}

int numFac(int n){
    int tel = 0, copyN = n;
    if(isPrime(n))
        return 1;
    for(int i = 2; i * i <= copyN; i++){
        if(n % i == 0){
            tel++;
            while(n % i == 0){
                n/=i;
            }
        }
    }
    if(n > 1)
        tel++;
    return tel;
    
}

bool solve(int n){
    
    for(int i = 0; i < 4; i++)
        if(numFac(n + i) != 4)
            return false;
    
    return true;
}

int main(){
    clock_t tStart = clock();

    int i = 647, count = 0;
    while(!solve(i))
        i++;
    
    cout << i << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




