#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

int main(){
	int t , n, temp; 
	cin >> t ;
	while (t--){
		cin >> n ;
		vector<long long> v ; 
		for(int i =0 ; i< n ; i++){
			cin >> temp ; 
			v.pb(temp);
		}

		sort(v.begin(), v.end());
		unsigned long long ans = abs(v[0]-v[1]) + abs(v[1] - v[n-1]) + abs(v[n-1]- v[0]); 
		cout << ans << endl ;
	}
	return 0;
}