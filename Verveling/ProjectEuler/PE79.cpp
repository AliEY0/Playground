#include <bits/stdc++.h>


using namespace std;
//gcd method from ->  https://math.stackexchange.com/a/2156132
inline unsigned gcd(unsigned u, unsigned v)
{
    auto shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if(u > v)
            std::swap(u, v);
    } while((v -= u));
    return u << shift;
}
template<class T>
inline bool are_coprimes(T a, T b) {
    if(!((a | b) & 1))
        return false;
    return 1 == gcd(a, b);
}
void solve(){
    int n = 1;
    int k = 12000;


    set<double> sd;
    int ans = 0;

    for(int i = 1; i <=k-1; i++){
        for(int j=  1; j <= k; j++){
                if((double)((double)i / (double)j) < ((double)1/(double)3))continue;
                if((double)((double)i / (double)j) > 0.5)continue;
                if(are_coprimes(i, j) == 1){
                    //cout << i << " " << j << "\n";
                    sd.insert((double)((double)i / (double)j));
                }

        }
        //cout << i << "\n";
    }

    for(double x : sd){
        if(x > (double)((double)1/(double)3) && x < (double)((double)1/(double)2)) ans++;
        //cout << x << "\n";
    }
    cout << ans << "\n";
}

int main() {
    solve();
    return 0;
}

