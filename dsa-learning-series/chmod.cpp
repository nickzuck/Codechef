#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

vector<int> primes {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
					 73, 79, 83, 89, 97};

int MAX_LIMIT = 100001;
int primesLen = primes.size();
int factorsMap[100001][100] ;

void printVector(vector<int> v){
	cout << "printing vector \n" ;
	cout << "size of vector : " << v.size() << endl ;  
	for(int i = 0 ;i < v.size() ; i++){
		cout << v[i] << " " ;
	}
	cout << "\nvector printed\n" ;
}

void addPrimeFactors(){
	for(int i = 0 ;i < MAX_LIMIT ; i++){
		int val = i ;
		for(int j = 0 ; j < primesLen ; j ++){
			if ( i == 0){
				factorsMap[i][j] = 0 ;
			} else {
				int count = factorsMap[i-1][primes[j]] ;
				while(val % primes[j] == 0){
					count ++ ;
					val /= primes[j] ;
				}
				factorsMap[i][primes[j]] = count ;
			}
		}
	}
}

long long exponential_squaring(long long base, long long power, long long mod){
	if (power == 0)
		return 1 ;
	long long val = exponential_squaring(base, power/2, mod);
	val = (val * val) % mod ;
	if (power %2){
		val = (base * val)% mod ;
	}
	return val ;
}

int main(){
	int q, n , a , b , temp, mod;
	cin >> n ;
	vector<int> v ;

	// printVector(primes);
	for(int i= 0 ;i < n ;i++){
		cin >> temp ;
		v.pb(temp);
	}

	addPrimeFactors();

	cin >> q  ;
	while(q--){
		long long ans ;
		cin >> a >> b >> mod;
		ans = a;

		if (a != b){
			for(int i = 0 ;i < primesLen; i++){
				// cout << "i = " << i << endl ;
				int primeVal = primes[i] ;
				// cout << "prime val : " << primeVal << endl ;
				// cout << "factorsMap : " << factorsMap[b][primeVal]  << endl ;
				// cout <<  "factorsMapOther : " <<  factorsMap[a][primeVal] << endl ;
				long long temp = exponential_squaring(primeVal, factorsMap[b][primeVal] - factorsMap[a][primeVal], mod);
				// cout << "temp = " << temp << endl ;
				ans *= temp ;
				ans %= mod ;
			}
		}
		

		cout << ans % mod << endl ;
	}

	return 0;
}