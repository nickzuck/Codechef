#include<bits/stdc++.h>

#define ll long long
#define pb push_back 

using namespace std ;

ll array_sum_func(vector<int> v){
	ll sum = 0 ;
	for(int i= 0 ; i < v.size(); i++){
		sum += v[i];
	}
	return sum ;
}

ll max_subarray_sum(vector<int> v){
	ll max_sum = 0 ; 
	ll curr_sum = 0 ;
	int start = 0 ;
	// int end = 0 ;

	max_sum = LLONG_MIN ;
	curr_sum = 0 ;
	for(int i = 0 ; i< v.size() ;i++){
		curr_sum += v[i] ;
		max_sum = max(curr_sum, max_sum);
		while (curr_sum <=0 and start <= i){
			curr_sum -= v[start] ;
			start ++ ;
		}
		if (curr_sum < 0)
			curr_sum = 0 ;
	}
	return max_sum ;
}

ll prefix_suffix_max(vector<int> v){
	int n = v.size();
	vector<ll> prefix_sum, suffix_sum(n) ; 

	prefix_sum.pb(v[0]) ;
	for(int i = 1 ; i < v.size(); i++){
		prefix_sum.pb(prefix_sum[i-1] + v[i]);
	}

	suffix_sum[n-1] = v[n-1];
	for(int i = n-2 ; i >=0 ; i--){
		suffix_sum[i] = suffix_sum[i+1] + v[i];
	}
	
	ll v1 = *max_element(prefix_sum.begin(), prefix_sum.end()); 
	ll v2 = *max_element(suffix_sum.begin(), suffix_sum.end());
	
	return v1 + v2 ;

}

int main(){
	int t, n, k, temp ;
	cin >> t ; 
	while(t--){
		cin >> n >> k ;
		vector<int> v ; 
		for(int i = 0 ; i< n; i++){
			cin >> temp ;
			v.pb(temp);
		}

		ll prefix_sum = 0 ;
		if (k> 1)
			prefix_sum = prefix_suffix_max(v);

		ll array_sum = array_sum_func(v) ;

		// cout << "array sum : "<< array_sum << endl ;
		// cout << "prefix_sum: "<< prefix_sum << endl ;
		// cout << "n = " << n << endl ;
		if (array_sum > 0) {
			prefix_sum = prefix_sum + array_sum * (k-2) ;
		}

		cout << max(array_sum*k , max(max_subarray_sum(v), prefix_sum)) << endl ;
	}
	return 0;
}