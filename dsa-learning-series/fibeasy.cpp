#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

long long MAX_LIMIT = pow(10,18);

map<long long, bool> powersOfTwo(vector<long long> twosVector){
	long long n = 2 ;
	map<long long, bool> twos ;
	while(n < MAX_LIMIT){
		twos[n] = true ;
		twosVector.pb(n) ;
		n *= 2 ;
		cout << "n = " << n << endl ;
	}
	return twos ;
}

map<long long, long long> preprocess(map<long long, bool> &twos){
	map<long long, long long> mp ;

	mp[1] = 0 ;
	mp[2] = 1 ;
	long long  first = 0, second = 1;
	long long ans = 0 ;
	for (int i = 3 ; i < MAX_LIMIT ; i++){
	
		long long  temp = first ;
		first = second ;
		second += temp ;

		first %= 10 ;
		second %= 10 ;

		if (twos[i]){
			ans = second ;
			mp[i] = ans ;
			cout << i << " " << ans << endl ;
		}
		
	}
	return mp ;
}


int main(){
	long long t , n; 
	cin >> t ;
	// cout << "preprocessing\n";
	// vector<long long> twosVector ;
	// map<long long, bool> twos = powersOfTwo(twosVector) ;
	// cout <<"where";
	// map<long long, long long> fibonacci = preprocess(twos) ;
	vector<long long> twosVector {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216} ;
	map<long long, long long> fibonacci{{1, 0},
										{2, 1},
										{4, 2},
										{8, 3},
										{16, 0},
										{32, 9},
										{64, 2},
										{128, 3},
										{256, 0},
										{512, 9},
										{1024, 2},
										{2048, 3},
										{4096, 0},
										{8192, 9},
										{16384, 2},
										{32768, 3},
										{65536, 0},
										{131072, 9},
										{262144, 2},
										{524288, 3},
										{1048576, 0},
										{2097152, 9},
										{4194304, 2},
										{8388608, 3},
										{16777216, 0}};
	while (t--){
		cin >> n ;
		long long i = 0 ;
		long long pow = 0 ;
		while(twosVector[i] <= n) {
			pow ++ ;
			i++ ;
		}

		i -- ;
		// cout << "i = " << i << "twos vector = " << twosVector[i] << endl ;
		cout << fibonacci[twosVector[i]]  << endl ;
	}
	return 0;
}