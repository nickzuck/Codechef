#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

int main(){
	int t , n, temp; 
	cin >> t ;
	while (t--){
		cin >> n ;
		vector<int> v ; 
		for(int i =0 ; i< n ; i++){
			cin >> temp ; 
			v.pb(temp);
		}

		unsigned long long maxVal = 0 ;
		for(int i = 0; i< n ; i++){
			for(int j = i+1; j < n ; j++){
				for(int k = j+1 ; k < n ; k++){
					unsigned long long currVal = abs(v[i]-v[j]) + abs(v[j]-v[k]) + abs(v[k] - v[i]) ;
					maxVal = max(currVal, maxVal);
				}
			}
		}
		cout << maxVal << endl ;  
	}
	return 0;
}