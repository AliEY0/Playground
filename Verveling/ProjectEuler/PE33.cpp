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

    int gcd(int a, int b){
        if(b == 0)
            return a;
        return gcd(b, a % b);
    }
int main(){
    //clock_t tStart = clock();
    
    int denpro = 1;
    int numpro = 1;
    for(int i = 10; i < 100; i++){
        for(int j = 10; j < 100; j++){
            if(i == j || i > j) continue;
            double pr = (double)(i)/(double)(j);
            int TI = i / 10;
            int MTI = i % 10;
            int TJ = j / 10;
            int MTJ = j % 10;
            if(TI == TJ && TI != 0 && MTJ != 0){
                if ((double)(MTI) / (double)(MTJ) == pr) 
                   numpro *= MTI, denpro *= MTJ;
                    // product.insert( MTJ);
            }

            else if(MTI == TJ && MTI != 0 && MTJ != 0){
                if ((double)(TI) / (double)(MTJ) == pr)  
                    numpro *= TI, denpro *= MTJ;
                    //product.insert(MTJ);
            }

            else if(MTI == MTJ && MTI != 0 && TJ != 0){
                if ((double)(TI) / (double)(TJ) == pr){
                    
                   numpro *= TI, denpro *= TJ;
                    //iproduct.insert(TJ);
                    //product.insert(TI * 10 + TJ);

                } 
                    
            }
            
            else if(MTJ == TI && TI != 0 && TJ != 0){
                if ((double)(MTI) / (double)(TJ) == pr)  
                   numpro *= MTI, denpro *= TJ;
                    //iproduct.insert(TJ);
                    //product.insert( TJ);
            }
        }
    }
    //cout << denpro <<"\n"<<numpro<<"\n";
    cout << denpro/ (gcd(denpro, numpro)) << "\n";
    
    //I took the Implementation of the brute force algorithm from this website -> https://www.volkansendemir.com/project-euler/problem-33
    //and the gcd step from this site https://www.mathblog.dk/project-euler-33-fractions-unorthodox-cancelling-method/
    //printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




