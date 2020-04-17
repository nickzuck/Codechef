// Completely unclear problem statement

#include<bits/stdc++.h>

using namespace std ;

int main(){
	int t, n, m ;
	cin >> t ;
	while(t--){
		int min_price = INT_MAX , min_type = -1 ;
		map<int, int> mp ;
		cin >> n >> m ;
	
		for(int i = 1 ;i <= m ; i++){
			mp[i] = -1;
		}
	
		int price[n+1], fruit_type[n+1] ;
		for(int i = 0 ;i < n ; i++){
			cin >> fruit_type[i] ; 			
		}
		for(int i = 0 ;i < n; i++){
			cin >>price[i] ;

			if (mp[fruit_type[i]] == -1)
				mp[fruit_type[i]] = 0 ;

			mp[fruit_type[i]] += price[i] ;
			if(price[i] < min_price){
				min_price = price[i];
				min_type = fruit_type[i] ;
			}
		}
		
		map<int, int>::iterator it ;
		int min_cost = INT_MAX ;
		for(it = mp.begin() ; it != mp.end() ; ++it){
			if(it->second == -1){
				continue ;
			}
			if(it->second < min_cost and it->second != 0){
				min_cost = it->second ;
			}
		}
		cout << min_cost << endl ;
		
	}
	return 0;
}
