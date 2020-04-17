#include<iostream>
#include<cmath>
#define MAX 100002

using namespace std ; 

int main()
{
	long long int a[MAX] ,  count , rembread  , k , n , t , i;
	cin >> t ; 
	while(t--){
		cin >> n >> k ; 
		for (i = 0 ; i<n ; i++){
			cin >> a[i]  ; 
		}

		count = 0 ; 
		rembread = 0 ; 
		for(i = 0 ; i<n ; i++){
			if(rembread < 0 )
				rembread  = 0 ; 
			if (a[i] > rembread){
				//cout << "You are in if statement\n" ; 
				a[i] -= rembread ;  
				count += a[i] / k ; 
				//cout << "a[i]%k = "<<a[i] %k <<endl ; 
				//cout << "REm bread = " << rembread << endl ; 
				if (a[i]%k != 0){
					//cout << "You are in inner if and a[i]%k = " << a[i]%k << endl ; 
					count ++ ; 
					rembread = k - (a[i]%k) ; 
				}	
			}

			else{
				rembread = rembread - a[i] ; 
			}
			rembread -- ; 
		}
		cout << count << endl ; 
		
	}  
return 0 ; 
}
