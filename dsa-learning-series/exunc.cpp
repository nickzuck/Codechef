#include<bits/stdc++.h>

using namespace std ;

void printVector(vector<int> v){
	cout << "printing vector \n";
	int n= v.size();
	for(int i = 0 ; i < n-1 ; i++){
		cout << v[i]<< " " ;
	}
	cout << "vector printed\n";

}

void printSet(set<int> s) {
	set<int>::iterator it ;
	cout << "printing set\n" ;
	for(it = s.begin() ; it != s.end() ; it++){
		cout << *it << " " ;
	}
	cout << "set printed \n";
}

int main(){
	int n, q ;
	cin >> n >> q; 
	vector<int> v(n+1) ;
	// cout <<"where";
	for (int i = 0 ; i < n ;i++){
		// cout << "i = " << i << endl ;
		cin >> v[i];
		// cout << v[i] << endl ;
	}
	// cout << "here";
	set<int> s;
	set<int>::iterator it ;
	s.insert(0);
	for(int i= 1 ; i< n; i++){
		if(v[i]%v[i-1] != 0){
			// s.insert(i-1) ;
			s.insert(i);
		}
	}

	// cout << "here " << endl ;
	// printSet(s);
	int queryType, j, newVal, newS ;
	for(int i = 0 ;i < q ; i++){
		cin >> queryType ;
		if (queryType == 1){
			cin >> j >> newVal;
			j -= 1;
			v[j] = newVal;
			// printVector(v);
			if (j >0 and v[j] %v[j-1] == 0){ // If they lie in same set, remove the boundary element
				s.erase(j);
			} else {
				s.insert(j) ; // else create boundary.
				// s.insert(j-1) ;
			}

			if(v[j+1] % v[j] == 0 ){
				s.erase(j+1) ;
			} else {
				// s.insert(j) ;
				s.insert(j+1);
			}
			// printSet(s);

		} else {
			cin >> j ;
			j -= 1;
			it = s.upper_bound(j);
			it -- ;
			cout << *it +1 << endl; 
		}
	}

	

}