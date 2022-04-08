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
const int MOD = 1000000007;
const int MX = 1000005;//1e6+5

string encrypt(string message, int rot){
    string encryptedMessage = "";
    int len = message.size();
    for(int i = 0; i < len; i++){
        encryptedMessage += (char)(65 + ((((int)message[i] - 65) + rot) % 26));
    }
    return encryptedMessage;
}

int main(){
    string message = "DITISZEERGEHEIM";
    int rot = 23;
    string encryptedMessage = encrypt(message, rot);
    cout << encryptedMessage << "\n";
    return 0;
}

