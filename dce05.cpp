#include<iostream> 

using namespace std ; 

int main ()
{

	long long int div , t ,  n  ;  
	cin >> t ; 
	while (t--){
		cin >> n ;  
		int flag = 0 ;
		div = 1073741824    ;  
		while (flag == 0 ){
			if (n / div != 0)	
				flag = 1 ;  
			else {
				div /= 2 ; 
			}
		}
		cout << div <<endl ;
		
	}
return 0 ; 
}