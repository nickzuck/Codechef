#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

vector<int> getPrimes(int limit) {
	vector<int> primes ;
	map<int, bool> notPrime;
	for (int i = 2 ;i <= limit; i++){
		if(!notPrime[i]){
			primes.pb(i); // add to list of primes
			for(int j = 2*i ; j <= limit ; j+= i){
				notPrime[j] = true ;
			}
		}
	}
	return primes ;
}

void printVector(vector<int> v){
	cout << "printing vector \n" ;
	for(int i = 0 ;i < v.size() ; i++){
		cout << v[i] << " " ;
	}
	cout << "\nvector printed\n" ;
}

int main(){
	int t , n, temp; 
	cin >> t ;
	vector<int> primes = getPrimes(100000) ;
	// printVector(primes);

	int primesLen = primes.size();
	while (t--){
		cin >> n ;
		vector<int> v ;
		for(int i = 0 ; i < n ; i++){
			cin >> temp ;
			v.push_back(temp);
		}

		// Store the count of prime factors for each number
		// Store in map to find the factor which comes maximum number of times
		map<int, int> factorsCount ;
		long long minCount = LLONG_MAX ;
		
		for (int i = 0 ;i < primesLen ; i++){
			long long  totalCount = 0 ;
			for(int j = 0 ;j < n ; j++){
				int temp = v[j]% primes[i] ;
				if(temp != 0 ){
					// cout << "here : " << temp << endl ;
					totalCount += (primes[i] - temp);
				}
			}
			// cout << primes[i] << " "  << totalCount << endl ;
			minCount = min(minCount, totalCount);
		}
		cout << minCount << endl ;

		// for(int j = 0 ;j < n ; j++){
		// 	for(j = 0 ; j < primesLen; j++){
		// 		int temp = v[i]% primes[j] ;
		// 		if(temp != 0){
		// 			totalCount += (primes[j] - temp) ;
		// 		}
		// 	}
		// }		

	}
	return 0;
}