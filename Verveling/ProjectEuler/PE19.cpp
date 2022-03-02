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

int main(){
    clock_t tStart = clock();
    int res =0;
    int dag = 2;//1 januari 1901 was een dinsdag

        
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for(int i = 1901; i <= 2000; i++){
        if((i%4==0&&i%100!=0)||(i%400==0)) months[1]=29;
        else months[1] = 28;
        for(int j = 0; j <  12; j++){
            dag += (months[j]%7);
            if(dag%7==0)res++;
            //voorbeeld
            //31 dagen is gelijk aan 4 weken + 3 dagen
            //dus we moeten alleen weten hoeveel dagen er zijn
            //en die optellen op de huidige dag
            //want weken optellen gaat u alleen maar op dezelfde dag zetten
            //en dat hebben wij niet nodig
        
        }

    }
    cout << res << "\n";
            
    
    printf("\nTime taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    return 0;
}




