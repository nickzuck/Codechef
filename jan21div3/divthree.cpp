#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair
#define ll long long

using namespace std ;

int main(){
	int t , n, k, d; 
	cin >> t ;
	while (t--){
		cin >> n >> k >> d;
		ll sum = 0 ;
		int temp ;
		for(int i =0 ; i< n ;i++){
			cin  >> temp ;
			sum += temp ;
		}
		int val = sum / k ;
		if (val > d){
			cout << d << endl ;
		} else {
			cout << val << endl ;
		}

	}
	return 0;
}