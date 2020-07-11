#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;


int main(){
	int t , n, q, K; 
	cin >> t ;
	while (t--){
		cin >> n >> K >> q;
		char str[n+1];
		int l, r ;
		cin >> str ;
		while(q--){
			long int ans = 0 ;
			cin >> l >> r ;
			l-- ; 
			r-- ;
			int j = l ;
			int count0 = 0, count1 = 0 ;
			str[j] == '1' ? count1 ++ : count0++ ; 
			for(int i = l ; i  <= r ; i++ ){
				while( j <= r and count0 <= K and count1 <= K){
					j ++ ;
					if (j > r){
						break ;
					}
					str[j] == '1' ? count1 ++ : count0++ ; 
				}

				ans += j-i ;
				str[i] == '1' ? count1 -- : count0-- ; 
			}
			cout << ans << endl ;
		}
	}
	return 0;
}