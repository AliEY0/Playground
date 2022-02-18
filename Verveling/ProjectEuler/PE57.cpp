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

string add(string a, string b){
     const int N = 1000;
     int arr[N];
     for(int i = 0; i < N; i++)
         arr[i] = 0;
 
     for(int j = a.size() - 1, i = N - 1; i >= N - a.size(); j--,i--)
         arr[i] += (a[j] - '0');
 
     for(int j = b.size() - 1, i = N - 1; i >= N - b.size(); j--,i--)
         arr[i] += (b[j] - '0');
 
 
     for(int i = N - 1; i > 1; i--){
         if(arr[i] >= 10){
             arr[i]-=10;
             arr[i - 1]++;
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
    const int N = 1000;
    vector<string> vsN(N);

    vsN[0] = "1";
    vsN[1] = "3";
    for(int i = 2; i  < N; i++)
        vsN[i] = add(multiply(2, vsN[i - 1]), vsN[i - 2]);
    

    vector<string> vsD(1000);
    vsD[0] = "2";
    vsD[1] = "5";
    for(int i = 2; i  < N; i++)
        vsD[i] = add(multiply(2, vsD[i - 1]), vsD[i - 2]);
    int res = 0;
    
    for(int i = 1; i  < N; i++)
        if(vsN[i].size() > vsD[i - 1].size())
            res++;
    cout << res << "\n";
    
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




