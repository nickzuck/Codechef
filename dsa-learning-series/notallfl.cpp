#include<bits/stdc++.h>

using namespace std ;

int main(){
	int t , n, k; 
	cin >> t ;
	while (t--){
		cin >> n >> k;
		int arr[n+1];
		for (int i = 0; i < n; ++i){
			cin >> arr[i] ;  	
		}

		int start = 0, end = 0, maxl = 0 ;
		map<int, int> mp ;
		while(end < n){
			mp[arr[end]] ++ ;
			end ++ ;
			int l = mp.size();
			if (l< k) {
				maxl =max(maxl, end-start);
			}
			while(l >= k){
				int temp = arr[start] ;
				// cout << "here" << endl ;
				mp[temp]-- ;
				start ++ ;
				if (mp[temp] == 0) {
					mp.erase(temp);
				}
				l = mp.size() ;
			}
		}
		cout << maxl << endl ;
	}
	return 0;
}