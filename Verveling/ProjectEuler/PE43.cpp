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


int nPrime(int n){
     int arr[n];
     int ans = 0;
     for(int i = 1;i <= n; i++)
         arr[i - 1] = i;
 
 
 
     return ans;
 }

bool Check(int arr[]){

        if(arr[3] % 2 == 1) return false;
        if((arr[2] + arr[3] + arr[4]) % 3 != 0) return false;
        
        if(arr[5] % 5 != 0) return false;
        if( (100*arr[4] + 10*arr[5] + arr[6]) % 7 != 0) return false;
        
        if( (100*arr[5] +10* arr[6] + arr[7]) % 11 != 0) return false;
        
        if( (100*arr[6] + 10*arr[7] + arr[8]) % 13 != 0) return false;
        
        if(( 100 * arr[7] +10* arr[8] + arr[9]) % 17 != 0) return false;
        
        return true;

}


int main(){
    clock_t tStart = clock();
    
    const int N = 10;
    int arr[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    ll som = 0;
    sort(arr, arr + N);
    reverse(arr, arr + N);
    do{

        if(Check(arr)){
        ll val = 0;
        for(int  i = 0; i < N; i++)
            val = (val * 10) + arr[i];
        
        som += val;
        }
        
    } while (prev_permutation(arr, arr + N));
    
    cout << som << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




