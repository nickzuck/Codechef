#include<bits/stdc++.h>

#define pr pair<long long, long long>
#define pb push_back
#define mp make_pair

using namespace std ;


bool canCross(long long intial, vector<pr> &v){
	for(long long i = 0 ; i < v.size(); i++){
		intial += v[i].second ;
		if(intial < 0){
			return false ;
		}
	}
	return intial > 0 ;
}

int main(){
	long long t , x, b, c; 
	long long temp1, temp2 , temp3;
	cin >> t ;
	while (t--){
		cin >> x ;
		cin >> b ;

		vector<pr> v ;
		long long max_poison = 0 ;
		for (long long i = 0 ;i < b; i++){
			cin >> temp1 >> temp2 ;
			v.pb(mp(temp1, -temp2)) ;
			max_poison += temp2 ;
		}

		cin >> c ;
		for(long long i = 0 ;i < c ; i++){
			// cout << "input here\n" ; 
			cin >> temp1 >> temp2 >> temp3 ;
			temp2 = min(temp2, temp3);
			v.pb(mp(temp1, temp2));
		}

		sort(v.begin(), v.end());
		long long count = 0 ;
		for(long long i= 0 ;i < v.size() ; i++){
			count += v[i].second ;
		}

		long long start = 1 , end = max_poison, ans = max_poison;
		while(start <= end){
			// cout << "processing \n" ;
			long long mid = (start +end)/2 ;
			if(canCross(mid, v)){
				ans = min(ans, mid);
				end = mid -1 ;
			} else {
				start = mid +1 ;
			}
		}

		cout << ans+1 << endl ;

	}
	return 0;
}