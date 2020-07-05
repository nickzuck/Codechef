#include<bits/stdc++.h>

#define pr pair<int, int>
#define pb push_back
#define mp make_pair

using namespace std ;

bool isPossible(int l, int r, int zeros[], int k){
	int zerosCount = zeros[r] - zeros[l-1] ;
	int n = (r-l+1);
	int onesCount = n - zerosCount ;
	return zerosCount <= k && onesCount <= k ;
}

int no_of_subarrays(int l, int r){
	int n = (r-l+1) ;
	return (n*(n+1))/2 ;
}

int calculate_ans(int l, int r, int zeros[], int k){
	if (isPossible(l, r, zeros, l)){
		cout << "here : " << l << " " << r << endl ;
		return no_of_subarrays(l, r);
	}
	while(l <= r){
		int mid = (l+r)/2;
		return calculate_ans(l, mid, zeros, k) + calculate_ans(mid+1, r, zeros, k);
	}
	return 0;
}

int main(){
	int t , n, q, K; 
	cin >> t ;
	while (t--){
		cin >> n >> K >> q;
		char str[n+1];
		int l, r ;
		cin >> str ;
		// int zeros[n+1];
		// zeros[0] = 0 ;
		// for (int i= 1 ; i < n ;i++){
		// 	zeros[i] = zeros[i-1] ;
		// 	if(zeros[i-1] == '0'){
		// 		zeros[i] = zeros[i-1] + 1;
		// 	}
		// }
		// for(int i= 0 ; i < q ;i++){
		// 	cin >> l >> r ;
		// 	cout << calculate_ans(l, r, zeros, k) << endl;
		// }
		while(q--){
			int ans = 0 ;
			cin >> l >> r ;
			l-- ; 
			r-- ;
			for(int i = l ; i  <= r ; i++ ){
				int val = min(i + 2*K -1, r) ;
				int count0 = 0 , count1 = 0 ;
				for (int j= i ; j <= val ; j++){					
					// for (int k = i ; k <= j ; k++){
					if(str[j] == '1'){
						count1++;
					} else {
						count0 ++;
					}

					if(count0 > K  or count1 > K){
						// cout << "invalid for : " << i << " " << j << " " << count0 << "  " << count1  << endl ;
						break;
					} else {
						ans ++ ;
					}
				}
			}
			cout << ans << endl ;
		}
	}
	return 0;
}