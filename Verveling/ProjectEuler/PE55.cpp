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
bool isPalindrome(string s, int l, int r){
    if(l > r)
        return true;
    if(s[l] == s[r])
        return isPalindrome(s, l+=1, r-=1);
    else
        return false;
}


string rev(string s){
    string res = "";
    int n = s.size();
    
    for(int i = n - 1; i >= 0; i--){
        res += s[i];
    }
    return res;
}

string add(string a, string b){
    const int N = 100;
    int val[N];
    for(int i = 0; i < N; i++)
        val[i] = 0;
    int n = a.size();
    for(int i = n; i > 0; i--){
        val[i] += (a[i - 1] - '0') + (b[i - 1] - '0');
        if(val[i] >= 10){
            val[i] -= 10;
            val[i - 1]++;
        }
    }
    string s = "";
    if(val[0] != 0)
        s += (val[0] + '0');
    for(int i = 1; i <= n; i++)
        s += (val[i] + '0');
    return s;
}

int main(){
    clock_t tStart = clock();
    int ans = 10000; //Je hebt in het begin 10000 potentiële getallen
    for(int i = 1; i <= 10000; i++){
        string som = "";
        string copyI = to_string(i);
        for(int j = 1; j <= 50; j++){
            som = add(copyI, rev(copyI));
            if(isPalindrome(som, 0, som.size() - 1)){
                ans--; // als je een palindroom vindt dan mag je een getal verwijderen van de stapel getallen :) 
                break;
            }
            copyI = som;
        }
    }
    cout << ans << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




