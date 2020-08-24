#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair
#define ll long long 

using namespace std ;

int main(){
	int t , n, temp; 
	cin >> t ;
	while (t--){
		cin >> n ;
		// cout << "n = " << n << endl ;
		vector<int> v ; 
		for(int i = 0 ; i < n ;i++){
			cin >> temp ;
			v.pb(temp);
		}

		ll ans = LLONG_MIN, sum  ;
		// cout << "here\n" ;
		for(int i = 0 ;i < n ; i++){

			ll s1, s2, s4 ;
			if (i == 0 ){
				s1 = v[i] + v[n-1] + v[n-2] ;
				s2 = v[i] + v[n-1] + v[i+1] ;
				s4 = v[i] + v[n-2] + v[i+2] ;
			} else if (i == 1){
				s1 = v[0] + v[i] + v[n-1] ;
				s2 = v[i] + v[i-1] + v[(i+1)%n] ;
				s4 = v[i] + v[n-1] + v[(i+2)%n] ;
			} else {
				s1 = v[i] + v[i-1] + v[i-2] ;
				s2 = v[i] + v[i-1] + v[(i+1) %n] ;
				s4 = v[i] + v[i-2] + v[(i+2)%n] ;
			}
			
			ll s3 = v[i] + v[ (i+1) % n] + v[(i+2) %n] ;
			// cout << s1 << " "  << s2 << " " << s3 << " " << s4 << endl  ;
			sum = max(max(s1, max(s2, s3)), s4);
			ans = max(ans, sum);
		}
		cout << ans << endl ;

	}
	return 0;
}