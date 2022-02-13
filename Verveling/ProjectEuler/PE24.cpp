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
    
    int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 
    sort(arr, arr + 10);
    int i = 0;
    do {
        i++;
    } while (i <= 999999 && next_permutation(arr, arr + 10));
    for(int x : arr)
        cout << x;
    cout << "\n";
    return 0;
}




