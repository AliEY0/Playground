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
bool check(string s){
    if(s.length() < 19)
        return false;
    
    for(int i = 0, j = 1; i <= 18;j++, i+=2){
        if(j == 10) j =0;
        if(s[i]  -'0' != j) return false;
    }
    return true;
}

int main(){
    clock_t tStart = clock();
    vector<uint64_t> squares;

    //1_2_3_4_5_6_7_8_9_0,
    //x = 1020304050607080900 sqrt(x) = 1010101010
    //x = 1929394959697989990 sqrt(x) = 1389026623
    uint64_t L = 1010101010, R = 1389026623; 
    for(uint64_t i = L; i <= R; i+=10){ //laatste getal moet wel een 0 zijn om een 0 te bekomen in zijn kwadraat 10 * 10 =  100;
        if(check(to_string((uint64_t)i*(uint64_t)i))){ 
            cout << i << "\n";
            break;
        }
    }
    printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




