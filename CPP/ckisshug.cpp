#include<bits/stdc++.h>

#define pr pair<long long, long long>
#define pb push_back
#define mp make_pair

using namespace std ;

long long mod = 1000000007 ;
long long MAX_LIMIT = 1000000000;

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

long long exponential_squari(long long base, long long power, long long mod){
	if (power == 0)
		return 1 ;
	long long val = (base % mod * base % mod)%mod;
	if (power == 2) {
		return val ;
	}
	if (power %2 == 0){
		return exponential_squaring(val, power/2, mod);
	} else {
		return base * exponential_squaring(val , (power-1)/2, mod);
	}

}

long long calculate(long long n){
	if (n == 1){
		return 2;
	}
	if (n == 2){
		return 4 ;
	}

	return calculate(n-1) + exponential_squaring(2, n/2, mod);
}

vector<long long> preprocess(){
	cout << "processing \n ";
	vector<long long> vals = {0, 2, 4, 6};
	long long powOfTwo = 2 ;
	for(int i = 4; i <= MAX_LIMIT ;i++){
		powOfTwo = (powOfTwo * 2) % mod ;
		long long val = (vals[i-1] + powOfTwo)%mod ;
		vals.pb(val);
		if (i %100000000 == 0){
			cout << " i : " << i << endl ;
		}
	}
	return vals ;
}

int main(){
	long long t , n; 
	cin >> t ;
	// vector<long long> vals = preprocess();
	// cout << "Processed : " << endl ;
	while (t--){
		cin >> n ;
		n ++ ;
		long long n1 = n/2 ;
		cout << (exponential_squaring(2, n/2, mod) + exponential_squaring(2, n-n1, mod) -2 ) %mod << endl ;
	}
	return 0;
}