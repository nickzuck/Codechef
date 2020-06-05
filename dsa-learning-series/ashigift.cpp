#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;


bool canCross(int intial, vector<pr> &v){
	for(int i = 0 ; i < v.size(); i++){
		intial += v[i].second ;
	}
	return intial > 0 ;
}

int main(){
	int t , x, b, c; 
	int temp1, temp2 , temp3;
	cin >> t ;
	while (t--){
		cin >> x ;
		cin >> b ;

		vector<pr> v ;
		int max_poison = 0 ;
		for (int i = 0 ;i < b; i++){
			cin >> temp1 >> temp2 ;
			v.pb(mp(temp1, -temp2)) ;
			max_poison += temp2 ;
		}

		cin >> c ;
		for(int i = 0 ;i < c ; i++){
			// cout << "input here\n" ; 
			cin >> temp1 >> temp2 >> temp3 ;
			temp2 = min(temp2, temp3);
			v.pb(mp(temp1, temp2));
		}

		sort(v.begin(), v.end());
		int count = 0 ;
		for(int i= 0 ;i < v.size() ; i++){
			count += v[i].second ;
		}

		int start = 1 , end = max_poison, ans = max_poison;
		while(start <= end){
			// cout << "processing \n" ;
			int mid = (start +end)/2 ;
			if(canCross(mid, v)){
				ans = min(ans, mid);
				end = mid -1 ;
			} else {
				start = mid +1 ;
			}
		}

		cout << ans+1 << endl ;

	}
	return 0;
}