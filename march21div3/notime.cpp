#include<bits/stdc++.h>

using namespace std ; 

int main(){
	int n, h, x , temp ;
	cin >> n >> h >> x ; 
	bool possible = false ;
	for (int i = 0 ;  i < n ; i++){
		cin >> temp ;
		if (temp + x >= h){
			possible = true ;
		}
	}
	if (possible){
		cout << "YES" << endl ;
	} else {
		cout << "NO" << endl ;
	}
	return 0 ;
}