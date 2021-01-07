#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair
#define ll long long

using namespace std ;

int main(){
	int t , n, m, temp ; 
	cin >> t ;
	while (t--){
		cin >> n >> m ;
		ll sa, sb ;
		vector<int> a , b ;
		for (int i = 0 ; i < n ;i++){
			cin >> temp ;
			a.pb(temp);
			sa += temp ; 
		}

		for(int i = 0 ; i < m ;i++){
			cin >> temp ;
			b.pb(temp);
			sb += temp ;
		}

		if (sa < sb){
			sort(a.begin(), a.end());
			sort(b.begin(), b.end());
		}

		int i = 0 , j = m-1 , count = 0;
		while (sa < sb && i < n && j >= 0){
			if (a[i] == b[j]){
				continue ;
			}
			sa -= a[i] ; 
			sa += b[j] ;

			sb -= b[j] ;
			sb += a[i] ;

			i ++ ; 
			j -- ;
			count ++ ;
		}
		// cout << "sa, sb : " << sa << "  " << sb << endl ;
		if (sa < sb){
			cout << -1  << endl ;
		} else {
			cout << count << endl ;
		}
	}
	return 0;
}