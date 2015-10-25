#include<iostream>
#include<algorithm>

#define MAX 100002
using namespace std ;

int main ()
{
	long long int arr[MAX] , i , len , t , n , ans = 0; 	
	cin >> t ; 
	while (t--){
		cin >> n ; 
		for (i = 1 ; i<=n ;i++){
			cin >> arr[i] ; 
		}
		
		i =1 ; 
		len = 1 ; 
		ans =  0 ; 
		while(i<=n){
			if(arr[i+1] > arr[i] && i!= n){
				len ++ ;
				i++ ;
			}	
			else {
				ans += (len*(len+1))/2 ; 
				len = 1 ; 
				i++ ; 
			}
		}
		cout << ans << endl ; 
	}
	
return 0 ; 
}