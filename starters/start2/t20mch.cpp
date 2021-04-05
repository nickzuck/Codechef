#include<bits/stdc++.h>

using namespace std ; 

int main(){
	int r, o , c ;
	cin >> r >> o >> c ;

	r ++ ;
	r -= c ;
	// cout << "r = " << r << endl ;
	// cout << "((20-o)*6) " << ((20-o)*6*6)  << endl ;
	if (r > ((20-o)*6*6) ){
		cout << "NO\n";
	} else {
		cout << "YES\n";
	}

	return 0;
}