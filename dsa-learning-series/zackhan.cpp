#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

int gcd(int a , int b){
	if(a == 0)
		return b;
	return gcd(b%a, a);
}

int main(){
	int t , L, B; 
	cin >> t ;
	while (t--){
		cin >> L >> B;
		cout << gcd(L, B) << endl;
	}
	return 0;
}