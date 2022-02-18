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
string decBin(int n)
 {
   string result;
   while (n > 0)
   {
     int digit = n % 2;
     n /= 2;
     result.insert(0, 1, char(digit + '0'));
   }
   return result;
 }
 


int main(){
    clock_t tStart = clock();

    int ans = 0;
    for(int i = 1; i < 1000000; i++){
        string s = to_string(i);
        string b = decBin(i);
        if(isPalindrome(s, 0, s.size() - 1) && isPalindrome(b, 0, b.size()-1 ))
            ans += i;
    }
    cout << ans << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




