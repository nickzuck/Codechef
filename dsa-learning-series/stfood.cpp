#include<bits/stdc++.h>

using namespace std ;

int main(){
	int t , n; 
	cin >> t ;
	while (t--){
		cin >> n;

		int max_cost = 0;
		while(n --){
			int s, v, p;
			cin >> s >> p >> v ;
			int temp = p/(s+1) ;
			temp *= v;
			max_cost = max(max_cost, temp);
		}
		cout << max_cost << endl ;	
	}
	return 0;
}