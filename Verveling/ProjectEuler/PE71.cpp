#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b){
	if(b == 0)
		return a;
	return gcd(b, a % b);
}

int lcm(int a, int b){
	return a * b / gcd(a, b);
}

struct Fraction{

	pair<int, int> original;
	pair<int, int> newfrac;
	
};





int main(){
	
	int d = 1000000, common = 1;
	/*	
	for(int i = 1; i <= d; i++){
		common = lcm(common, i);		
	}
	vector<Fraction> vf;
	cout << common << "\n";
	for(int i = 1; i <= d; i++){
		for(int j = 1; j < i; j++){
			if(gcd(j, i) == 1){
				cout << j << " " << d << "\n";
				Fraction f;
				f.original = {j, i};
				f.newfrac = { (common / i) * j , common};
				vf.push_back(f);
			}
				
		}	
	}
    std::sort(vf.newfrac.begin(), vf.newfrac.end());
	
	for(int i = 0; i < vf.size(); i++){
		cout << i + 1 << " : " << vf[i].original.first << "/" <<vf[i].original.second << " -> "  << vf[i].newfrac.first << "/" << vf[i].newfrac.second << "\n";
	}
	
	//cout << binarySearch(1, 5);
	int tel = 0;
	for(int i = 3; i <= d; i++){
		int c = (int)(i/(double)7*3 - 0.00001);
		tel += c;
		cout <<i <<"  "<< c << " " << tel <<"\n";
		//cout << i << " " << (int)(i/(double)7*3) << "\n";
		for(int j = 2; j <= c; j++){
			if(gcd(i, j) != 1)
				tel--;
		}
	}
	cout << tel << "\n";
*/
	double max = 0.0000000;
	int ans = 0;
	double val = 3/(double)7;
	for(int i = 1; i <= d; i++){
		double x = (int)(i / (double)7 * 3);
		double real = x/(double)i;
		if(real > max && real != val){
			max = real;
			ans = x;
		}
		
	}
	cout << "\n";
	cout << "---------------------\n";
	cout << ans << " " << max << "\n";



	return 0;
}

