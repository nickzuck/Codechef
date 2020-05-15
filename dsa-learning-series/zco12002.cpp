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
	sort(wHoles.begin(), wHoles.end(), greater<int>());

	// printVector(vHoles);
	// printVector(wHoles);
	int wLen = wHoles.size(), vLen = vHoles.size() ;
	int vPtr = 0 , wPtr = 0, minTime = INT_MAX ;
	for(int i = 0 ;i < n ; i++){
		vPtr = 0 ; wPtr = 0 ;
		// cout << "Before while loop : " << v[i].first << " " << v[i].second << " "  << vHoles[vPtr] << " " << wHoles[wPtr] << " " << vPtr << " " << wPtr <<endl ; 

		while(vHoles[vPtr] <= v[i].first and wHoles[wPtr] >= v[i].second) {
			if (wPtr >= wLen || vPtr >= vLen){
				break ;
			}
			// cout << v[i].first << " " << v[i].second << " "  << vHoles[vPtr] << " " << wHoles[wPtr] << endl ; 
			// minTime = min((v[i].first - vHoles[vPtr]) + (wHoles[wPtr] - v[i].second), minTime);
			minTime = min(wHoles[wPtr] - vHoles[vPtr] + 1, minTime);
			if (vHoles[vPtr+1] < v[i].first and vPtr < vLen-1) {
				vPtr ++ ;
			} else {
				wPtr ++ ;
			}
		}
	
	}
	cout << minTime << endl ;
	return 0;
}