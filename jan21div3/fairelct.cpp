#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair
#define ll long long

using namespace std ;

int solveSubTask1(ll sa, ll sb, int n, int m, int aVal, int bVal){
	if (sa > sb){
		return 0 ;
	}

	int count = 0 ;
	while(sa <= sb && count < n && count < m){
		sa -= aVal ;  sa += bVal;
		sb -= bVal ; sb += aVal;
		count ++ ;
	}

	if (sa <= sb){
		return -1 ;
	}
	return count ;

}

int main(){
	int t , n, m, temp ; 
	cin >> t ;
	while (t--){
		cin >> n >> m ;
		ll sa, sb ;
		vector<int> a , b ;
		int val1, val2 ;
		for (int i = 0 ; i < n ;i++){
			cin >> temp ;
			a.pb(temp);
			sa += temp ; 
			val1 = temp ;
		}

		for(int i = 0 ; i < m ;i++){
			cin >> temp ;
			b.pb(temp);
			sb += temp ;
			val2 = temp ;
		}
		int ans = solveSubTask1(sa, sb, n, m, val1, val2);
		cout << ans << endl ;

	}
	return 0;
}