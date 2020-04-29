#include<bits/stdc++.h>
#define mp make_pair

using namespace std ;

int main(){
	int t , n; 
	cin >> t ;
	while (t--){
		cin >> n ;
		int temp ; 
		stack<pair<int, int> > s ;
		for(int i = 0 ; i < n ; i++){
			cin >> temp ;
			if (s.empty()) {
				s.push(mp(temp, i));
			} else {
				pair<int, int> top = s.top() ;
				if (temp < top.first){
					s.push(mp(temp, i));
				}
			}
		}

		pair<int,int> top = s.top();
		int subs = top.first ;
		int ans = top.first * n ;
		s.pop() ;
		while(!s.empty()){
			top = s.top() ;
			int val = top.first - subs ;
			subs += val;
			// cout << "here : " << top.first << "  " << top.second << endl;
			ans += val * (top.second+1) ;
			s.pop() ;
		}
		cout << ans << endl ;
	}
	return 0;
}