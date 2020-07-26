#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

int main(){
	int t , n, m, x, y; 
	cin >> t ;
	while (t--){
		cin >> n >> m >> x >> y;
		
		n-- ; 
		m-- ;
		// cout << n << " " << m << " " << x << " " << y << endl ;
		if((n%x == 0 and m%y == 0) or ( (n-1)%x ==0 and (m-1)%y == 0 and (n-1) >= 0 and (m-1) >= 0) ) {
			cout << "Chefirnemo" << endl ;
		} else {
			cout << "Pofik" << endl ;
		}
	}
	return 0;
}