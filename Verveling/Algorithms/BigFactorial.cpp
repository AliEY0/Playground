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

string multiply(int a, string s){
     const int N = 100000;
     int len = s.size();
     int arr[N];
     for(int i = 0; i < N; i++)
         arr[i] = 0;
     for(int i = N - 1 ; i >= 100; i--){
         if(len > 0){
             int x = arr[i];
             arr[i] = ((s[len - 1] - '0') *  a) + x;
             len--;
         }
         if(arr[i] >= 10){
             arr[i - 1] += arr[i] / 10;
             arr[i] %= 10;
         }
 
     }
     int ind = 0;
     for(int i = 0; i < N; i++){
         if(arr[i] != 0){
             ind = i;
             break;
         }
     }
     string res = "";
     for(int i = ind; i < N; i++)
         res += (arr[i] + '0');
     return res;
 }


int main(){
    clock_t tStart = clock();
    const int N = 10000;
    string mult = "1";
    for(int i = 1; i <= N; i++){
        mult = multiply(i, mult);
    }
    cout << mult << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




