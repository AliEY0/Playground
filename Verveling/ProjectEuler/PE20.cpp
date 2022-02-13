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
     int arr[101][200];
     for(int i = 0; i < 101; i++)
         for(int j = 0; j < 200; j++)
             arr[i][j] = 0;
       
     arr[0][199] = 1;
     for(int i = 1; i < 101; i++){
         for(int j = 199; j >= 1; j--){      
             arr[i][j] += (arr[i - 1][j] * i);
             if(arr[i][j] >= 10){
                 arr[i][j-1]+= (arr[i][j] / 10);
                 arr[i][j]%=10;
             } 
         } 
     } 
     int som = 0;
     for(int i = 0; i < 200; i++)
         som += arr[100][i];
     cout << som << "\n";
     return 0;
 }

