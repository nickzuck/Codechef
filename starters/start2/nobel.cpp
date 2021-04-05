#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n, m, t ;
	cin >> t ;
	while(t--){
		cin >> n >> m ;

		map<int,bool> mp ;
		// int xorVal = m ;
		// for(int i = 1 ; i <= m-1 ; i++){
		// 	xorVal ^= i ;
		// }

		int temp ;

		// cout << "xorVal = "<< xorVal << endl ;
		int distinct = 0 ;
		for(int i = 0 ; i<n; i++){
			cin >> temp ;
			if (!mp[temp]){
				mp[temp] = true ;
				// xorVal ^= temp ;
				distinct ++ ;
			}
		}
		// cout << "xorVal -->  " << xorVal << endl ;

		// bool found = false ;
		// for(int i = 1 ; i < m ; i++){
		// 	if (mp[i]  == false){
		// 		found = true ;
		// 		break ;
		// 	}
		// }
		if (distinct == m){
			cout << "No\n";
		} else {
			cout << "Yes\n";
		}
	}
	return 0 ;
}