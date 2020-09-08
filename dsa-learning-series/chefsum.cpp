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
		int mini = INT_MAX ; 
		int minIdx = - 1;
		// int sum = 0 ;
		for(int i = 0 ;i < n ; i++){
			cin >> temp ;
			if (temp < mini){
				mini = temp ;
				minIdx = i ;
			}
			// mini = min(mini, temp);
			// sum += temp ;
		}

		cout << minIdx+1 << endl ;
	}
	return 0;
}