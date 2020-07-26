#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

int MAX_LIMIT = 100000 ;

map<int,int> preprocess(){
	int limit = sqrt(MAX_LIMIT);
	map<int, int> primes ;
	// for(int i = 2 ;i < MAX_LIMIT ; i++){
	// 	primes[i] = 0 ;
	// }
	for(int i = 2 ; i <= limit ;i++){
		if (primes[i] == 0){
			for(int j = i ; j <= MAX_LIMIT ; j += i){
				primes[j] ++ ;
			}
		}
	}
	return primes ;
}

int main(){
	int t , k, a, b; 
	map<int, int> primes = preprocess();
	cin >> t ;
	while (t--){

		cin >> a >> b >> k;
		int count = 0 ;
		for (int i = a ; i <= b ;i++){
			if (primes[i] == k){
				count ++ ;
			}
		}
		cout << count << endl ;
	}
	return 0;
}