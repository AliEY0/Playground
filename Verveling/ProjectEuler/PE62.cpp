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
const int MX = 10000;
map<vector<int>, int> mvii;
vector<int> retVec(ll n){
    vector<int> res;
    while(n > 0){
        res.push_back(n % 10);
        n /= 10;
    }
    sort(res.begin(), res.end());
    return res;
}
void solve(){

    vector<ll> cube(MX);
    for(int i = 1; i <= MX; i++){
        cube[i - 1] =1LL* i * i * i;
        vector<int> vec = retVec(cube[i-1]);
        mvii[vec]++;
    }
    for(int i = 1; i <= MX; i++){
        int x =  mvii[retVec(cube[i-1])]; 
        if(x == 5){
            cout << cube[i - 1]<< "\n";
            return;
        }
    }
}
int main(){
    clock_t tStart = clock();
    solve(); 
    printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




