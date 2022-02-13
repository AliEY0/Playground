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
    
    const int N = 10;

    auto SquareSum = [](int n){
        return (n*(2*n+1)*(n+1)) / 6;
    };

    cout << SquareSum(N) << "\n";


    return 0;
}




