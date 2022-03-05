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
const int RIGHT = 987654321 + 1;
const int LEFT = 123456789;
bool isPandigital(int n){
    vector<int> dig(10);

    while(n > 0){
        dig[n % 10]++;
        n/=10;
    }
    if(dig[0]>0)return false; 
    for(int i = 1; i < 10; i++)
        if(dig[i] > 1 || dig[i] == 0)
            return false;
    return true;
}

int add(int a, int b){
    int l10 = 10;
    while(l10 < b)
        l10*=10;
    a*=l10;
    a+=b;
    return a;
}
int algorithm(){
    const int N = 9999;
    //minder dan 5 cijfers anders krijg je dit -> add(10000,20000) = 1000020000 en dat is langer dan 9 negen cijfers 
    //Uw pandigital getal moet 9 cijfers hebben    
    int ans = 0;
    for(int i = 1; i <= N; i++){
        int conc = 0;
        for(int j = 1; j <= 13; j++){
            int val = i * j;
            conc = add(conc, val);
            if(conc > LEFT && conc < RIGHT && isPandigital(conc))
                ans = max(ans, conc);
        }
    }
    return ans;
}

int main(){
    clock_t tStart = clock();

    cout << algorithm() << "\n";
    printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




