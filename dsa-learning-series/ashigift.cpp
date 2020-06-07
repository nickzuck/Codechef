#include<bits/stdc++.h>

#define pr pair<long long, pair<long long, long long> >
#define pb push_back
#define mp make_pair

using namespace std ;


bool canCross(long long balance, vector<pr> &v){
	// cout << "\n\nintial balance : " << balance << endl ;
	for(long long i = 0 ; i < v.size(); i++){
		long long required = v[i].second.second ;
		long long gain = v[i].second.first ;

		// cout << "balance : " << balance << endl ;
		// cout << "pos , required, gain " << v[i].first << " " << required << "  " << gain << endl ;
		if(balance > required) 
			balance += gain ;
		if(balance < 0){
			return false ;
		}
	}
	return balance > 0 ;
}

bool compare(pr p1, pr p2){
	if(p1.first < p2.first){
		return true ;
	} 
	return p1.second.first > p2.second.first;
	
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
			v.pb(mp(temp1, mp(-temp2, 0))) ;
			max_poison += temp2 ;
		}

		cin >> c ;
		for(long long i = 0 ;i < c ; i++){
			// cout << "input here\n" ; 
			cin >> temp1 >> temp2 >> temp3 ;
			v.pb(mp(temp1, mp(temp3, temp2)));
		}

		sort(v.begin(), v.end(), compare);

		long long start = 0 , end = max_poison;
		long long ans = end ;
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