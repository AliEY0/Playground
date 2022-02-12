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


int main(){
    

    const int N = 101;
    ll arr[N][N];
    for(int i = 0;  i< N; i++)
        for(int j = 0; j <N; j++)
            arr[i][j] = 0;
    for(int i = 0; i < N; i++)
        arr[i][i] = 1;
    for(int i = 0; i < N; i++)
        arr[i][0] = 1;

    for(int i = 2; i < N; i++){
        for(int j = 1; j < i ; j++){
            arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
        if(arr[i][j] >= 1000000)
            arr[i][j] = 1000000;
        
        }
    }   
    int ans = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j <N;j++)
            if(arr[i][j] >= 1000000)
                ans++;
    }
    cout << ans << "\n";
    return 0;
}




