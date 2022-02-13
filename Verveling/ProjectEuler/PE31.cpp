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
    const int N = 201;
    int coins[8] = {1,2, 5, 10, 20, 50, 100, 200};
    int val[N];
    for(int i = 0; i < N; i++)
        val[i] = 0;
    val[0] = 1;

    for(int i = 0; i < 8; i++){
        for(int j = coins[i]; j <= 200; j++){
                val[j] += val[j - coins[i]];
        }
    }
    cout << val[N] << "\n";
    return 0;
}




