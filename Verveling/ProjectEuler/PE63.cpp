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

int check(int x){
    int tel = 0;
    const int N = 30;
    const int M = 50;
    int arr[N][M];
    for(int i = 0; i < N; i++)
        for(int j = 0; j < M; j++)
            arr[i][j] = 0;
    arr[0][M - 1] = 1;
    for(int i = 1; i < N; i++){
        for(int j = M - 1; j >= 10; j--){
            arr[i][j] += (arr[i - 1][j] * x);
            if(arr[i][j] >= 10){
                arr[i][j - 1] += (arr[i][j] / 10);
                arr[i][j] %= 10;
            }
        }
    }

    //for(int i = 991; i < M; i++)
      //  cout << arr[9][i];
    for(int i = 0; i < N; i++){
        int v = 0;
        for(int j =0; j < M; j++){
            if(arr[i][j] != 0){
                v = j;
                break;
            }
        }
        if(M -  v == i)
            tel++;
    }
    return tel;    
}

int main(){
    clock_t tStart = clock();
    int res = 0;
    const int N = 9;
    //check(8);
    for(int i = 1; i <= N ; i++)
        res += check(i);
    cout << res << "\n";
    
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




