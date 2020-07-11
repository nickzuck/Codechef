#include<bits/stdc++.h>

#define pr pair<long long, long long>
#define pb push_back
#define mp make_pair

using namespace std ;

int main(){
	long long t , n, q, K; 
	cin >> t ;
	while (t--){
		cin >> n >> K >> q;
		char str[n+1];
		long long far[n+1], sumfar[n+1];
		long long ans = 0 ;
		cin >> str ;

		long long j = 1;
		long long count0 = 0, count1 = 0 ;
		str[j-1] == '1' ? count1 ++ : count0++ ; 
		for(long long i = 1 ; i  <= n ; i++ ){
			// far[i] = 0 ;
			while( j <= n and count0 <= K and count1 <= K){
				j ++ ;
				if (j > n){
					break ;
				}
				str[j-1] == '1' ? count1 ++ : count0++ ; 
			}

			far[i] = j;
			str[i-1] == '1' ? count1 -- : count0-- ; 
		}
		sumfar[0] = 0 ;
		// cout << "far[0] : " << far[0] << endl ;
		for (long long i = 1 ; i <= n ;i++){
			sumfar[i] = sumfar[i-1] + far[i];
		}

		long long l, r ;
		
		while(q--){
			cin >> l >> r ;

			long long start = l-1 , end = r+1 ;
			while(end-start >1){
				long long mid = (start + end)/2 ;
				if(far[mid]<=r){
					start = mid ;
				} else {
					end = mid ;
				}
			}
			long long val = start ;
			// cout << "val : "<< val << endl ;
			cout << sumfar[val] - sumfar[l-1] + (r-val)*(r+1) - (r*(r+1)/2 - l*(l-1)/2) << endl;
		}
	}
	return 0;
}