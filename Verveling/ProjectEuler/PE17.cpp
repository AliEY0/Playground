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


array<string, 20> unit = {"","one","two","three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"}; 


array<string, 11> ten = {"", "", "twenty","thirty","forty", "fifty",  "sixty",   "seventy",   "eighty",   "ninety"};



int calc(int n){
    int tel = 0;
    string res = "";
    if(n < 20){
        res += unit[n];
        tel += unit[n].size();
    } else if(n < 100){
        res += ten[n/10];
        res+=unit[n%10];

        tel += ten[n/10].size()+unit[n%10].size();
    } else if(n < 1000){
        tel += unit[n/100].size();
        tel += 7;//hundred
        res += unit[n/100];
        res += "hundred";
        if(n%100!=0){
            tel += 3;
            res += "and";
            int h = (n%100)/10;
            int e = n % 10;
            if(h < 2)
            {res += unit[n%100];
            
                tel+= unit[n%100].size();}
            else
            {res += ten[h];
                res += unit[e];
               tel+=ten[h].size()+unit[e].size();}
        }
    } else if(n==1000){
        tel += 11;
        res += "onethousand";

        //one thousand
    }
    //cout << n << " -> " << res << ", Length: " << res.size() << "\n";
    return tel;
}



int main(){
    clock_t tStart = clock();
    int res = 0;
    for(int i = 1; i <= 1000; i++)
        res+=calc(i);
    
    cout << res << "\n";
    printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




