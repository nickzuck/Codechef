#include<bits/stdc++.h>

using namespace std ;

void printVector(vector<int> v){
	cout << "printing vector \n" ;
	for(int i = 0 ;i < v.size() ; i++){
		cout << v[i] << " " ;
	}
	cout << "vector printed\n" ;
}

int main(){
	int t1, t2 , n, x, y;
	cin >> n >> x >> y ; 
	vector<pair<int, int> > v ; 
	for(int i = 0 ; i < n; i++){
		cin >> t1 >> t2 ;
		v.push_back(make_pair(t1, t2));
	}
	sort(v.begin(), v.end());

	vector<int> vHoles, wHoles ;
	for(int i= 0 ; i < x ;  i++){
		cin >> t1  ;
		vHoles.push_back(t1);
	}

	for(int i = 0 ; i < y ; i++){
		cin >> t1 ; 
		wHoles.push_back(t1);
	}

	sort(vHoles.begin(), vHoles.end());
	sort(wHoles.begin(), wHoles.end());

	// printVector(vHoles);
	// printVector(wHoles);
	int wLen = wHoles.size(), vLen = vHoles.size() ;
	int vPtr = 0 , wPtr = 0, minTime = INT_MAX ;
	for(int i = 0 ;i < n ; i++){
		int r = upper_bound(vHoles.begin(), vHoles.end(), v[i].first) - vHoles.begin() - 1;
		int q = lower_bound(wHoles.begin(), wHoles.end(), v[i].second) - wHoles.begin();

		// cout << r << " " << q << endl ;
		if (r >=0 and r < vLen and q >= 0 and q < wLen) 
			minTime = min(wHoles[q] - vHoles[r] + 1, minTime);
			
	
	}
	cout << minTime << endl ;
	return 0;
}