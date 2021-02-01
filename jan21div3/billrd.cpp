#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair
#define ll long long

using namespace std ;

pair<int, int> find_impact_point(int x, int y, int c){
	if (x == -1){ // determine x
		return mp(y - c, y);
	}
	else {
		return mp(x, x + c);
	}
}

int find_const(int x, int y){
	return y - x ;
}

void printVector(vector< pair<int, int> > v ){
	for(int i =0 ; i < v.size() ; i++){
		cout << v[i].first << " " << v[i].second << endl ;
	}
}

int main(){
	int t , n, k, x, y; 
	cin >> t ;

	while (t--){
		cin >> n >> k >> x >> y ;
		vector< pair<int, int> > coords ;

		int c = find_const(x, y);

		bool corner_hit = false ;
		pair<int, int> t ;
		t = find_impact_point(n, -1, c);
		if (corner_hit == false){
			if (t.first == n and t.second == n){
				corner_hit = true;
			}
			coords.pb(t);
		}

		t = find_impact_point(-1, n, -c);
		if (corner_hit == false){
			if (t.first == n and t.second == n){
				corner_hit = true;
			}
			coords.pb(t);
		}

		t = find_impact_point(0, -1, -c);
		if (corner_hit == false){
			if (t.first == n and t.second == n){
				corner_hit = true;
			}
			coords.pb(t);
		}

		t = find_impact_point(-1, 0, c);
		if (corner_hit == false){
			if (t.first == n and t.second == n){
				corner_hit = true;
			}
			coords.pb(t);
		}

		int coords_size = coords.size() ;
		// printVector(coords);
		if (k < coords_size){
			// cout << "h " << k << endl;
			cout << coords[k-1].first << " " << coords[k-1].second << endl ;
		} else {
			if(coords_size == 4){ 
				k = k%4 ;
				// cout << "e";
				if (k != 0 ){
					cout << coords[k-1].first << " " << coords[k-1].second << endl ;
				} else {
					cout << coords[k].first << " " << coords[k].second << endl ;
				}
				
			} else {
				// cout << "r" ;
				cout << coords[coords_size-1].first << " " << coords[coords_size-1].second << endl ;
			}
		}

	}
	return 0;
}