#include<bits/stdc++.h>

using namespace std ;

int main(){
	int t, n , temp; 
	cin >> t ;
	while(t--){
		cin >> n ;
		vector< pair<int, int> > v ; 
		for(int i = 0 ; i< n ;i++){
			cin >> temp ; 
			v.push_back(make_pair(temp,i));
		}

		vector<int> dis ; 
		for(int i = 0 ; i < n; i++){
			cin >> temp ;
			dis.push_back(temp);
		}

		sort(v.begin(), v.end()) ;

		int ans = 0 ;
		int lastPos = v[0].second;
		for(int i = 1 ; i < n; i++){
			int initialPos , currPos ;
			initialPos = currPos = v[i].second ;
			while(currPos <= lastPos){
				currPos += dis[initialPos] ; 
				ans ++;
			}
			lastPos = currPos;
		}
		cout << ans << endl ;
	}
	return 0 ;
}