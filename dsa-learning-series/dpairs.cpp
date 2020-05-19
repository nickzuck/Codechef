#include<bits/stdc++.h>
#include<unordered_set>

using namespace std ;

int main(){
	int temp , n, m; 
	cin >> n >> m;
	vector<int> v1, v2 ;
	for (int i = 0 ;i < n; i++){
		cin >> temp ;
		v1.push_back(temp);
	}
	for (int j = 0 ; j < m ; j++){
		cin >> temp ;
		v2.push_back(temp);
	}
	unordered_set <int> s ;
	int count = 0 ;
	for(int i = 0 ;i <n ;i++){
		for(int j= 0 ; j < m ; j++){
			// cout << "sum : " << v1[i] + v2[j] << endl ;
			if (s.find(v1[i] + v2[j]) == s.end() && count < n+m-1){
				count += 1 ;
				cout << i  << " "  << j << endl ;
				s.insert(v1[i] + v2[j]);
			}
		}
	}
	return 0;
}