#include<iostream>
#include<vector>

using namespace std ;

const int MAX = 4001  ; 

int suffix[MAX] ;
int dp[MAX][MAX] ;

int main(){
	int t, n, k , temp;
	cin >> t ;
	while(t--){
		cin >> n >> k ;

		vector<int> height ;

		for(int i = 0 ; i < n ; i++){
			cin >> temp ;
			height.push_back(temp);
		}

		sort(height.begin(), height.end()) ;
		suffix[n] = 0 ;
		for(int i = n-1 ; i >=0 ; i--) {
			suffix[i] = suffix[i+1] + height[i] ;
			// cout << "height[i] = " << height[i] << endl ;
		}

		for(int i = 0 ; i <= n ; i++){
			for(int j =0 ; j <=k ; j++){
				dp[i][j] = INT_MAX ;
			}
		}
		dp[n][0] = 0 ;

		for(int i = n-1 ; i >=0  ; i--){
			for(int j = k ; j >= 0  ;j--){
				if(height[i] >= j){
					dp[i][j] = height[i] ;
					continue ;
				}

				if (dp[i+1][j-height[i]] == INT_MAX){
					dp[i][j] = INT_MAX ; 
				} else {
					// cout << "dp[i+1][j-height[i]]  = " << dp[i+1][j-height[i]] << endl ;
					// cout << "dp[i+1][j] = " << dp[i+1][j] << endl ;
					dp[i][j] = min(dp[i+1][j], dp[i+1][j-height[i]]+ height[i]) ;
				}
			}
		}

		bool found = false ;
		for(int i = n-1 ; i >= 0 ; i--){
			// cout << "dp[i][k] = " << dp[i][k] << endl ;
			if(suffix[i] - dp[i][k] >= k){
				found = true ;
				cout << n-i << endl ;
				break ;
			}
		}

		if (!found) {
			cout << -1 << endl ;
		}

	}
	return 0 ;
}