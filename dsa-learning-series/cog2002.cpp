#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair
#define ll long long 

using namespace std ;

int main(){
	long int t , n, temp; 
	cin >> t ;
	while (t--){
		cin >> n ;
		// cout << "n = " << n << endl ;
		vector<long int> v ; 
		for(int i = 0 ; i < n ;i++){
			cin >> temp ;
			v.pb(temp);
		}

		ll ans = LLONG_MIN, sum  ;
		// cout << "here\n" ;
		for(int i = 0 ;i < n ; i++){
			if (i == 0){
				sum = v[i] + v[i+1] + v[n-1] ;
			} else if (i == n-1){
				sum = v[i] + v[i-1] + v[0] ;
			} else{
				sum = v[i] + v[i+1] + v[i-1] ;
			}
			ans = max(ans, sum);
		}
		cout << ans << endl ;

	}
	return 0;
}