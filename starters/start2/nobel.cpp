#include<bits/stdc++.h>

using namespace std; 

int main(){
	int n, m, t ;
	cin >> t ;
	while(t--){
		cin >> n >> m ;

		map<int,bool> mp ;
		// for(int i = 1 ; i <= m ; i++){
		// 	mp[i] = true;
		// }

		int temp ;
		for(int i = 0 ; i<n; i++){
			cin >> temp ;
			mp[temp] = true ;
		}

		bool found = false ;
		for(int i = 1 ; i < m ; i++){
			if (mp[i]  == false){
				found = true ;
				break ;
			}
		}
		if (found){
			cout << "Yes\n";
		} else {
			cout << "No\n";
		}
	}
	return 0 ;
}