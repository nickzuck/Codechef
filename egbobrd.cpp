#include<iostream>
#include<cmath>

#define MAX  100002

using namespace std ;  


int main () 
{
	long int t  , a[MAX],  k , count , rembread  , n , i  ;  
	cin >> t ;  
	while (t--) {
		cin >> n >> k ; 
		count = 0 ;  
		rembread = 0 ; 
		for (i = 1 ; i<= n ; i++ ){
			cin >> a[i] ;  
			a[i] -= rembread ; 
			count +=  a[i]/k ; 
			if (a[i]%k !=0 ){
				count ++ ;  
				rembread = k  - (a[i]%k);
				if (rembread != 0 )
					rembread -- ;  
			}
		}
		cout << count << endl ; 
	}
return 0 ; 
}