#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

void printVector(vector<int> v){
	cout << "printing vector \n" ;
	for(int i = 0 ;i < v.size() ; i++){
		cout << v[i] << " " ;
	}
	cout << "vector printed\n" ;
}


int main(){
	int t , n; 
	cin >> t ;
	while (t--){
		cin >> n ;
		int nVal = n ;
		// cout << "input : " << n ;
		int limit = n ;
		vector<int> primes;

		map<int, bool> isPrime ;
		for (int i = 1 ; i <= limit ; i++){
			isPrime[i] = true ;
		}

		for (int i = 2 ; i <= limit ; i ++){
			if (isPrime[i]){
				for(int j = i ; j <= limit ; j+= i){
					isPrime[j] = false ;
				}
				primes.pb(i);
			}
		}

		int prime_len = primes.size() ;

		// printVector(primes);

		// Generate all semiprimes
		map<int, bool> mp ; 

		vector<int> semiprimes ; 
		int vectorLen = primes.size() ;
		for (int i = 0 ;i < vectorLen ; i++){
			for (int j = i ; j < vectorLen ; j++){
				if (primes[i] == primes[j]) {
					continue ;
				}
				int temp = primes[i] * primes[j] ;
				semiprimes.pb(temp) ;
				mp[temp] = true ;
			}
		}
		// printVector(semiprimes);

		bool found = false ;
		int semiprimesLen = semiprimes.size();
		for(int i = 0 ; i < semiprimesLen ; i++){
			if (mp.find(nVal - semiprimes[i]) != mp.end()) {
				found = true ;
				break ;
			}
		}



		// Print answer 
		if (found){
			cout << "YES\n" ; 
		} else {
			cout << "NO\n" ;
		}
		
	}
	return 0;
}