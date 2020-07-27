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
	int arr[7][MAX_LIMIT+2] ;
	for (int i = 0; i <= MAX_LIMIT+1; ++i){
		for(int j = 0 ; j<= 5 ;j ++){
			if (j == 0 || i == 0){
				arr[j][i] = 0 ;	
			} else {
				arr[j][i] = arr[j][i-1] ;
			}
		}
		int val = primes[i] ;
		arr[val][i] ++ ;
	}

	cin >> t ;
	while (t--){

		cin >> a >> b >> k;
		cout <<  arr[k][b] - arr[k][a-1]<< endl ;
	}
	return 0;
}