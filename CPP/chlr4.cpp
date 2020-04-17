#include<iostream>
#include<cmath>
#include<algorithm>

#define MAX 100003
#define MOD 1000000007


using namespace std ;

int main ()
{	
	//variable dec.
	long long int a[MAX] , n , k , i , j ,dp[MAX] , pos[MAX], ans = 1  ;
	
	//input
	cin >> n>> k ;
	for (i= 0; i<n ;i++){
		cin >> a[i] ;
	}
	
	//processing 
	dp[0] = a[0];
	pos[0] = -1 ; 
	for (i = 1 ; i<n ; i++){
		for (j = i-2 ; j>=0 ; j--){
			if(i-j > k)
				break ; 
			if (dp[i] > dp[j]){
				dp[i] = dp[j]; 
				pos[i] = j ; 	
			}
		}
		dp[i] *= a[i] ;
	}
	

	int temp = n-1 ;
	while(temp != -1){ //till it reaches the index 0
		ans = (a[temp]*ans)  % MOD ;
		temp = pos[temp] ;
	}

	cout << ans << endl;
return 0 ; 
}