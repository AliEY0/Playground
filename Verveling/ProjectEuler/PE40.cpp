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

int to_int(char c){
    return c - '0';
}
int main(){
    clock_t tStart = clock();
    const int N = 1000000;
    int arr[N + 1];
    arr[0] = 0;
    string s = "";
    for(int i = 0; i <= 200000; i++)
        s += to_string(i);
    cout << s.size() << "\n";
    int product = 1;
    for(int i = 0; i <= 6; i++){
        int val = pow(10, i);
        product *= to_int(s[val]);
    }
    cout << product << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




