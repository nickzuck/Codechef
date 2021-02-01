#include<algorithm>
#include<vector>
#include<iostream>

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
		ll sa = 0 , sb = 0;
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

		// if (sa <= sb){
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		// }

		int i = 0 , j = m-1 , count = 0;
		for(int i = 0 ; i < min(n, m); i++){
			if(sa > sb){
				break ;
			}
			sa -= a[i] ; 
			sa += b[m-i-1] ;

			sb -= b[m-i-1] ;
			sb += a[i] ;

			count ++ ;
		}
		// cout << "sa, sb : " << sa << "  " << sb << endl ;
		if (sa > sb){
			cout << count << endl ;
		} else {
			cout << -1 << endl ;
		}
	}
	return 0;
}