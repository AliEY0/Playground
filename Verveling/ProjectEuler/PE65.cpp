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
    const int N = 1000;
    int len = s.size();
    int arr[N];
    for(int i = 0; i < N; i++)
        arr[i] = 0;
    //for(int i = len, j = 0; i > 0; i--, j++)
      //arr[N - j - 1 ] = (s[i - 1] - '0');
        //arr[N - i ] = (s[i - 1] - '0');
    
    for(int i = 999 ; i >= 100; i--){
        if(len > 0){
            int x = arr[i];
            arr[i] = ((s[len - 1] - '0') *  a) + x;
            len--;
        }        
        //if(i > 996)
        //cout << i << " -> " << arr[i] << "\n";
        //cout << i << " -> " << arr[i] << " * " << a << " = " <<  arr[i] << "\n";
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
int sumDigits(string n){
    int som = 0, N = n.size();
    for(int i = 0; i < N; i++)
        som += (n[i] - '0');
    return som;
}
int main(){
    clock_t tStart = clock();
    
    //cout << multiply(10, "999") << "\n";
    //cout << add("87", "19") << "\n";
   
    const int N = 100;
    vector<string> calc(N + 1);
    calc[0] ="2";
    calc[1] = "3";
    ll tel = 1;
    for(int i = 2;  i <= N; i++){
        int sub = i + 1;
        if(sub % 3 == 0)
            tel = sub / 3 * 2;
        else
            tel = 1;
    calc[i] = add(multiply(tel, calc[i - 1]), calc[i - 2]);
    //cout << calc[i] << "\n";
    
    //cout << i << " -> " << sumDigits(calc[i]) <<"\n";
    }

    cout << sumDigits(calc[N - 1]) <<"\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




