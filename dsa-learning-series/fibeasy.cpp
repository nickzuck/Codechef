#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair
#define ull unsigned long long

using namespace std ;

ull MAX_LIMIT = pow(10,18);

void printVector(vector<ull > v){
	cout << "printing vector \n" ;
	for(int i = 0 ;i < v.size() ; i++){
		cout << v[i] << " " ;
	}
	cout << "vector printed\n" ;
}

map<ull, bool> powersOfTwo(vector<ull>&twosVector){
	ull n = 1 ;
	map<ull, bool> twos ;
	while(n <= MAX_LIMIT){
		twos[n] = true ;
		twosVector.pb(n) ;
		// cout << "n = " << n << endl ;
		n *= 2 ;
	}
	return twos ;
}

map<ull, ull> preprocess(map<ull, bool> &twos){
	map<ull, ull> mp ;

	mp[1] = 0 ;
	mp[2] = 1 ;
	ull  first = 0, second = 1;
	for (int i = 3 ; i <= 60 ; i++){
	
		ull  temp = first ;
		first = second ;
		second += temp ;

		first %= 10 ;
		second %= 10 ;

		mp[i] = second;
		// cout << i << " " << second << endl ;
				
	}
	return mp ;
}


int main(){
	ull t , n; 
	cin >> t ;
	// cout << "preprocessing\n";/
	vector<ull> twosVector ;
	map<ull, bool> twos = powersOfTwo(twosVector) ;
	map<ull, ull> fibonacci = preprocess(twos) ;
	
	while (t--){
		// printVector(twosVector);
		// cout << "input number\n" ;
		cin >> n ;

		int vecSize = twosVector.size() ;
		ull val ;
		vector<ull>::iterator it = lower_bound(twosVector.begin(), twosVector.end(), n);
		int idx = it - twosVector.begin() ;
		// cout << "twosVector[idx] " << twosVector[idx] << endl ;

		if (it == twosVector.end()){
			val = twosVector[vecSize-1] % 60 ;
		} else if (twosVector[idx] != n){
			idx -- ;
			val = twosVector[idx]%60 ;
		} else {
			val = twosVector[idx] % 60 ;
		}
	
		// ---------------------------
		// ull i = 0 ;
		// ull pow = 0 ;

		// // cout << "after input\n";

		// while(twosVector[i] <= n) {
		// 	// cout <<"in while loop\n";
		// 	pow ++ ;
		// 	i++ ;
		// 	// cout << i << "  " << twosVector[i] ;
		// }
		// // cout << "here\n" ; 
		// i -- ;
		// ull val = twosVector[i] ;
		// val = val%60 ;
		//-----------------------------

		if (val == 0){
			cout << fibonacci[60] << endl ;
		} else {
			cout << fibonacci[val] << endl ;
		}
	}
	return 0;
}