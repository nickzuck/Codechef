#include<iostream>
#include<cmath>
#include<algorithm>

#define MAX 1003  

using namespace std ; 

int main ()
{
	long long int t , n , w[MAX], ans , i , j , k , len ; 

	char correct[MAX] , chef[MAX] ;
	cin >> t ;
	while (t--){
		cin >> n  ; 
		for (int i = 0 ; i <n ; i++){
			cin >> correct[i] ; 
		}	
		len = 0 ;
		for (j = 0 ; j<n ; j++){
			cin >> chef[j] ; 
			if (chef[j] == correct[j]){
				len ++ ; 
			}
		}
	
		for (k= 0 ; k<= n ;k++){
			cin >> w[k] ; 
		}
	
		ans = 0; 
		for (k =0 ; k<=len ; k++){
			if (ans < w[k])
				ans = w[k] ; 
		}

		cout << ans << endl ;
	}

return 0 ;	
}