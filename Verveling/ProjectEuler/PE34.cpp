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

int main(){
    clock_t tStart = clock();

    int fac[10] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
    ll som = 0;
    for(int i = 3; i <= 1000000; i++){ //1miljoen is een gok omdat ik weet dat je niet te ver moet zoeken omdat 9 factorial best groot is(denk aan uw gedachten)
        int copyI = i, sum = 0;
        while(copyI > 0){
            sum += fac[copyI % 10];
            copyI/=10;
        }
        if(sum == i)
            som += i;
    }
    cout << som << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




