#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

unsigned long long MAX_LIMIT = pow(10,18);

void printVector(vector<unsigned long long > v){
	cout << "printing vector \n" ;
	for(int i = 0 ;i < v.size() ; i++){
		cout << v[i] << " " ;
	}
	cout << "vector printed\n" ;
}

map<unsigned long long, bool> powersOfTwo(vector<unsigned long long>&twosVector){
	unsigned long long n = 1 ;
	map<unsigned long long, bool> twos ;
	while(n <= MAX_LIMIT){
		twos[n] = true ;
		twosVector.pb(n) ;
		// cout << "n = " << n << endl ;
		n *= 2 ;
	}
	return twos ;
}

map<unsigned long long, unsigned long long> preprocess(map<unsigned long long, bool> &twos){
	map<unsigned long long, unsigned long long> mp ;

	mp[1] = 0 ;
	mp[2] = 1 ;
	unsigned long long  first = 0, second = 1;
	for (int i = 3 ; i <= 60 ; i++){
	
		unsigned long long  temp = first ;
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
	unsigned long long t , n; 
	cin >> t ;
	// cout << "preprocessing\n";/
	vector<unsigned long long> twosVector ;
	map<unsigned long long, bool> twos = powersOfTwo(twosVector) ;
	map<unsigned long long, unsigned long long> fibonacci = preprocess(twos) ;
	
	while (t--){
		// printVector(twosVector);
		// cout << "input number\n" ;
		cin >> n ;
		unsigned long long i = 0 ;
		unsigned long long pow = 0 ;
		// cout << "after input\n";

		while(twosVector[i] <= n) {
			// cout <<"in while loop\n";
			pow ++ ;
			i++ ;
			// cout << i << "  " << twosVector[i] ;
		}
		// cout << "here\n" ; 
		i -- ;
		unsigned long long val = twosVector[i] ;
		val = val%60 ;
		if (val == 0){
			cout << fibonacci[60] << endl ;
		} else {
			cout << fibonacci[val] << endl ;
		}
	}
	return 0;
}