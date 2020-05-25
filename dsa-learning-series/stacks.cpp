#include<bits/stdc++.h>

using namespace std ;

int main(){
	int t , n, temp; 
	cin >> t ;
	while (t--){
		cin >> n ;

		vector<int> s; 
		vector<int>::iterator it ;
		for(int i = 0 ;i < n ;i++){
			cin >> temp ;
			it = upper_bound(s.begin(), s.end(), temp);
			if (it != s.end()){
				*it = temp ;
			} else {
				s.push_back(temp);
			}
			
		}
		cout << s.size() << " ";
		for(it = s.begin() ; it != s.end(); ++it){
			cout << *it << " " ;
		}
		cout << endl ;
	}
	return 0;
}