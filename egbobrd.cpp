#include<iostream>
#include<cmath>

#define MAX  100002

using namespace std ;  


int main () 
{
	long int t  , a,  k , count , rembread  , n , i  ;  
	cin >> t ;  
	while (t--) {
		cin >> n >> k ; 
		count = 0 ;  
		rembread = 0 ; 
		for (i = 1 ; i<= n ; i++ ){
			cin >> a;  
			a -= rembread ; 
			count +=  a/k ;  // full packet calculation 

			// packets which are not eaten fully and their remaining breads  
			if (a%k !=0 ){
				count ++ ;  
				rembread = k  - (a%k) -1 ;
			}
		}
			
		cout << count << endl ; 
	}
return 0 ; 
}