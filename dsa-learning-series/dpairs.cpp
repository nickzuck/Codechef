#include<bits/stdc++.h>
#include<unordered_set>

using namespace std ;

int main(){
	int temp , n, m; 
	cin >> n >> m;
	vector<pair<int, int> > v1, v2 ;
	// unordered_set<int> s1, s2;
	for (int i = 0 ;i < n; i++){
		cin >> temp ;
		// if (s1.find(temp) == s1.end())
		v1.push_back(make_pair(temp, i));
	}
	for (int j = 0 ; j < m ; j++){
		cin >> temp ;
		// if (s2.find(temp) == s2.end())
		v2.push_back(make_pair(temp, j));
	}

	unordered_set <int> s ;
	int count = 0 ;
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());
	for(int i = 0 ;i < m ; i++){
		cout << v1[0].second << " " << v2[i].second << endl ;
	}
	for(int i = 1 ; i < n ; i++){
		cout << v1[i].second << " " << v2[m-1].second << endl ;
	}
	return 0;
}