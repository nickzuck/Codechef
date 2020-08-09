#include<bits/stdc++.h>

#define pr pair<long long, long long>
#define pb push_back
#define mp make_pair

using namespace std ;

vector<long long> primes {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
					 73, 79, 83, 89, 97};

long long MAX_LIMIT = 100001;
long long primesLen = primes.size();
long long factorsMap[100001][100] ;

void printVector(vector<long long> v){
	cout << "printing vector \n" ;
	cout << "size of vector : " << v.size() << endl ;  
	for(long long i = 0 ;i < v.size() ; i++){
		cout << v[i] << " " ;
	}
	cout << "\nvector printed\n" ;
}

void addPrimeFactors(vector<long long> v){
	for(long long j = 0 ; j < primesLen ; j ++){
		factorsMap[0][primes[j]] = 0 ;
	}
	for(long long i = 1 ;i <= v.size() ; i++){
		long long val = v[i-1] ;
		for(long long j = 0 ; j < primesLen ; j ++){
			long long count = factorsMap[i-1][primes[j]] ;
			while(val % primes[j] == 0){
				count ++ ;
				val /= primes[j] ;
			}
			factorsMap[i][primes[j]] = count ;
		}
	}
}

long long exponential_squaring(long long base, long long power, long long mod){
	if (power == 0){
		// cout <<"hereerrerere \n";
		return 1 ;
	}
	// cout << "going in " << power << endl;
	long long val = exponential_squaring(base, power/2, mod);
	val = (val * val) % mod ;
	if (power %2){
		val = (base * val)% mod ;
	}
	return val ;
}

int main(){
	long long q, n , a , b , temp, mod;
	cin >> n ;
	vector<long long> v ;

	// prlong longVector(primes);
	for(long long i= 0 ;i < n ;i++){
		cin >> temp ;
		v.pb(temp);
	}

	addPrimeFactors(v);
	// cout << "prime factors added\n";

	cin >> q  ;
	while(q--){
		long long ans ;
		cin >> a >> b >> mod;
		// a -- ;
		// b -- ;
		ans = 1;

		if (a != b){
			for(long long i = 0 ;i < primesLen; i++){
				// cout << "i = " << i << endl ;
				long long primeVal = primes[i] ;
				// cout << "prime val : " << primeVal << endl ;
				// cout << "factorsMap : " << factorsMap[b][primeVal]  << endl ;
				// cout <<  "factorsMapOther : " <<  factorsMap[a-1][primeVal] << endl ;
				long long temp = exponential_squaring(primeVal, factorsMap[b][primeVal] - factorsMap[a-1][primeVal], mod);
				// cout << "temp = " << temp << endl ;
				ans = (ans * temp)%mod ;
				// cout << "ans = " << ans << endl ;
				// ans %= mod ;
			}
			cout << ans % mod << endl ;
		} else {
			cout << v[a-1] % mod << endl ;
		}
		

		
	}

	return 0;
}