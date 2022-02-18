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

int numDiv(int n){
    int res = 1;
    int copyN = n;
    for(int i = 2; i * i <= copyN; i++){
        int tel = 0;
        while(n % i == 0){
            tel++;
            n /= i;
        }
        if(tel > 0)
            res = res * (1 + tel);
    }
    if(n > 1)
        res = res * 2;
    return res;
}


int main(){
    clock_t tStart = clock();
    int tel = 0;
    for(int i = 1; i <= 9999999; i++){
        if(numDiv(i)==numDiv(i+1))
            tel++;
    }
    cout << tel << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




