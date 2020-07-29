#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;


/// THIS SHOULD GET TLE --------
int main(){
	int q, n , a , b , temp, mod;
	cin >> n ;
	vector<int> v ;

	for(int i= 0 ;i < n ;i++){
		cin >> temp ;
		v.pb(temp);
	}
	cin >> q  ;
	while(q--){
		long ans ;
		cin >> a >> b >> mod;
		ans = v[a-1] ;
		for(int i= a ; i < b; i++ ){
			// cout << "ans : " << ans << endl ;
			// cout << "v[i] : " << v[i] << endl ;
			ans *= v[i] % mod;
			ans %= mod ;
			// cout << "ans here : " << ans << endl ;
		}
		cout << ans % mod << endl ;
	}

	return 0;
}