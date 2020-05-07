#include<bits/stdc++.h>
#define mp make_pair

using namespace std ;

int main(){
	long long t , n; 
	cin >> t ;
	while (t--){
		cin >> n ;
		long long temp ; 
		stack<pair<long long, long long> > s ;
		for(long long i = 0 ; i < n ; i++){
			cin >> temp ;
			if (s.empty()) {
				s.push(mp(temp, i));
			} else {
				pair<long long, long long> top = s.top() ;
				if (temp < top.first){
					s.push(mp(temp, i));
				}
			}
		}

		pair<long long,long long> top = s.top();
		long long subs = top.first ;
		long long ans = top.first * n ;
		s.pop() ;
		while(!s.empty()){
			top = s.top() ;
			long long val = top.first - subs ;
			subs += val;
			if (val <= 0){
				break;
			}
			// cout << "here : " << top.first << "  " << top.second << endl;
			ans += val * (top.second+1) ;
			s.pop() ;
		}
		cout << ans << endl ;
	}
	return 0;
}