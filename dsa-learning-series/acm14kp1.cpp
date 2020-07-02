#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

double distance(pr p1, pr p2){
	return sqrt( (p1.first - p2.first)*(p1.first - p2.first) + (p1.second - p2.second)*(p1.second - p2.second) );
}

int main(){
	int t , n ;
	double x , y; 
	cin >> t ;
	for(int cs = 1 ; cs <= t ; cs++){
		cin >> n ;
		vector<pr> v ;
		for (int i = 0 ; i < n; i++){
			cin >> x >> y ;
			v.pb(mp(x,y));
		}

		sort(v.begin(), v.end());
		double dis, min_dis = INT_MAX ;
		for(int i = 1 ; i < n-1; i++){
			dis += distance(v[i-1], v[i]) + distance(v[i], v[i+1]) + distance(v[i-1], v[i+1]);
			min_dis = min(dis, min_dis);
		}

		cout << "Case " << cs << ": "<< setprecision(12) << min_dis << endl ;
	}
	return 0;
}