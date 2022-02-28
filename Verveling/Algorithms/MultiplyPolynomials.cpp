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
vector<int> multiply(vector<int> a, vector<int> b){
    int sizeA = a.size();
    int sizeB = b.size();
    vector<int> res(sizeA + sizeB - 1);
    for(int i = 0; i < sizeA; i++){
        for(int j = 0; j < sizeB; j++){
            res[i+j] += a[i]*b[j];
        }
    }
    return res;
}
void printPolynomial(vector<int> c){
    for(int i = 0; i <c.size(); i++)
        cout << "x^" << i << " = " << c[i] << "\n";
}
int main(){
    clock_t tStart = clock();
    vector<int> a = {5, 0, 10, 6};
    vector<int> b = {1, 2, 4};
    vector<int> c = multiply(a, b);
    
    printPolynomial(c);
    cout << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




