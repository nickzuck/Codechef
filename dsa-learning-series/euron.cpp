#include<bits/stdc++.h>

using namespace std ;

int main(){
	int t , n, violations; 
	cin >> n;

	vector<int> v ;
	vector<int>::iterator it ;
	violations = 0 ;
	for(int i = 0 ; i < n ; i++){
		cin >> t;
		// cout << "t = " << t << endl ;
		it = upper_bound(v.begin(), v.end(), t);
		if (it != v.end()){
			// cout << "here\n";
			int pos = it -  v.begin();
			// cout << v.size() << " " << pos << endl ;
			int temp = v.size() - pos ;
			// cout << "temp : " << temp << endl ;
			violations += temp;
		}
		v.push_back(t) ;
	}

	cout << violations << endl ;
	
	return 0;
}