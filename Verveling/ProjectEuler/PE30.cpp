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

int isFifth(int n){
    int copyN = n;
    int som = 0;
    while(n > 0){
        som += pow(n % 10, 5);
        n /= 10;
    }
    if(som == copyN)
        return true;
    return false;
}


int main(){
    clock_t tStart = clock();
    
    //Getal 123456789 is een 9 getal met 9 digits
    //Maar als je goed oplet dan zie je dat er iets niet klopt
    //De grootste 9 digits getal som is 9 * 9⁵ (9⁵ omdat als je 1 digit hebt is dat uw maximum en maal 9 is om te benadrukken dat het om 9 digits gaat)
    //9  * 9⁵ = 531441
    //En getal 123456789 is vele malen groter dan onze product hierboven
    //
    //1 * 59049 = 59049  | 9
    //2 * 59049 = 118098 | 99
    //3 * 59049 = 177147 | 999
    //4 * 59049 = 236196 | 9999
    //5 * 59049 = 295245 | 99999  (dus uw upperbound is tussen 99999 en 999999)
    //6 * 59049 = 354294 | 999999 (oei de maximum dat je kan maken is 354294)
    //7 * 59049 = 413343 
    //8 * 59049 = 472392
    //9 * 59049 = 531441
    ll som = 0;
    for(int i = 2; i <= 999999;i++){
        if(isFifth(i)){
            som += i;
        }
    }
    
    cout << som << "\n";
    printf("----------------------------------------------\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




