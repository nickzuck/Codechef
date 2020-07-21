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
		// cout << "input : " << n ;
		int  limit = sqrt(n);
		vector<int> prime_factors;
		while(n %2 == 0 ){
			prime_factors.pb(2);
			// cout << "where ;" ;
			n /= 2;
		}

		for(int i = 3 ;i < limit; i+= 2){
			while( n % i == 0){
				n /= i ;
				prime_factors.pb(i);
			}
			// cout << "here" ;
		}

		int prime_len = prime_factors.size() ;

		// printVector(prime_factors);
		// cout << "checking prosasdf";
		// Check possibilities 
		bool possible = true ;
		if (prime_len < 2){
			possible = false ;
		} else if (prime_factors[0] == prime_factors[prime_len-1]){
			possible = false ;
		}


		// Print answer 
		if (possible){
			cout << "YES\n" ; 
		} else {
			cout << "NO\n" ;
		}
		
	}
	return 0;
}