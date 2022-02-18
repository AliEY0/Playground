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

bool Check(int a, int b){
    vector<int> vi(10, 0);
    while(a > 0){
        vi[a % 10]++;
        a /= 10;
    }
    while(b > 0){
        vi[b % 10]--;
        b /= 10;
    }

    for(int x : vi)
        if(x != 0)
            return false;
    return true;
}

int main(){
    clock_t tStart = clock();
    int ans = 0;
    for(int i  = 1; i < (1000000/6); i++){
        bool found = true;
        for(int j = 2; j <= 6; j++){
            if(!Check(i, i * j)){
                found = false;
                break;
            }
        }
        if(found)
            ans = i;
    }
    cout << ans << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




