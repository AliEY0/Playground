#include <bits/stdc++.h>


using namespace std;
vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29,
31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
73, 79, 83, 89, 97, 101, 103, 107, 109, 113,
127, 131, 137, 139, 149, 151, 157, 163, 167, 173,
179, 181, 191, 193, 197, 199, 211, 223, 227, 229};

int solve(int val, int som, int i, int len){
    //cout << som <<"\n";
    if (som == val) return 1;
    if (som > val)  return 0;
    if (i >= primes.size()) return 0;


    int check = solve(val, som + primes[i], i, len);
    int ret = solve(val, som, i + 1,len);
    return check + ret;
}

int main() {
    cout << solve(10, 0, 0, primes.size()) << "\n";
    for(int i = 0; i < 75; i++){
        cout << i << " : " << solve(i, 0, 0, primes.size()) << "\n";
    }
    return 0;
}

