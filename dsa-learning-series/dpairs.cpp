#include<bits/stdc++.h>
#include<unordered_set>

using namespace std ;

int main(){
	int temp , n, m; 
	cin >> n >> m;
	vector<int> v1, v2 ;
	// unordered_set<int> s1, s2;
	for (int i = 0 ;i < n; i++){
		cin >> temp ;
		// if (s1.find(temp) == s1.end())
		v1.push_back(temp);
	}
	for (int j = 0 ; j < m ; j++){
		cin >> temp ;
		// if (s2.find(temp) == s2.end())
		v2.push_back(temp);
	}
	unordered_set <int> s ;
	int count = 0 ;
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	for(int i = 0 ;i < n ;i++){
		for(int j= m-1 ; j >= 0; j--){
			// cout << "sum : " << v1[i] + v2[j] << endl ;
			if (count == n+m-1) {
				break;
			}
			if (s.find(v1[i] + v2[j]) == s.end() && count < n+m-1){
				count += 1 ;
				cout << i  << " "  << j << endl ;
				s.insert(v1[i] + v2[j]);
			}
		}
	}
	return 0;
}