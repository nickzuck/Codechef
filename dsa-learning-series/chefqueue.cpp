#include<bits/stdc++.h>
#define MOD 1000000007

using namespace std ;

int main(){
	int k , n, temp; 
	
	cin >> n >> k ;
	vector<int> v, new_vector ;
	for(int i= 0 ; i < n ; i++){
		cin >> temp ;
		v.push_back(temp);
	}

	stack<pair<int, int> >  s; 

	long long int ans = 1 ;
	// s.push(make_pair(v[i], 0));
	for(int i= 0 ;i < n ;i++){

		while(!s.empty() && (s.top()).first > v[i]){
			// cout << "here " << i << " " << s.top().second << endl ;
			ans *= (i - s.top().second + 1) ;
			ans %= MOD;
			s.pop();
		}

		if (s.empty()){
			new_vector.push_back(-1) ;
		} else {
			new_vector.push_back((s.top()).second);
		}

		s.push(make_pair(v[i], i));
	}

	// for(int i = 0 ;i < n ;i++){
	// 	cout << new_vector[i] << endl ;
	// 	if(new_vector[i] != -1 ){
	// 		ans *= (new_vector[i]-i +1);
	// 		ans %= MOD ;
	// 	}
	// }

	cout << ans << endl ;
	
	return 0;
}