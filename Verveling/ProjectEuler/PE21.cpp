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

using namespace std;

#define ll long long


int somDivisors(int n){
    ll product = 1;
    int copyN = n;
    for(int i = 2; i * i <= n; i++){
        int tel = 0;
            if(n % i == 0){
                while(copyN % i == 0){
                    copyN /= i;
                    tel++;
                 }
        int som = 0;
            if(tel > 0){
                for(int j = 0; j <= tel; j++)
                    som += (int)pow(i, j);
                
                    product *= som;
                }}
        }
   

    if(copyN  > 1)
        product *= (copyN + 1);
    return product - n;
}

int main(){
    

    int ans = 0;
    for(int i = 1; i <= 10000; i++){
        if(i != somDivisors(i) && i == somDivisors(somDivisors(i))){
            ans+= somDivisors(i);
        }
    }
    cout << ans << "\n";
    return 0;
}




