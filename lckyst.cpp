#include<iostream>
#include<cmath>

using namespace std ; 

int main ()
{
	long long int n , a , i ,j ,  temp , zeros , flag , ans , init; 
	cin >> n ; 
	for (i = 0 ; i<n ; i++)	
	{
		cin >>  a;
		temp = a ;  
		zeros = 0 ;
		flag = 1 ;  
		while (flag == 1){
			if (temp %5 ==0){
				zeros ++ ; 
				temp /= 5 ; 
			}
			else 
				flag = 0 ; 
		}
		if (zeros == 0 )
			cout << a << endl ; 
		else {
			init = 10 ; 
			for (j = 2 ; j<=zeros ; j++){init *= 10 ; }
			//cout << init << endl; 
			ans = 0 ; 
			for (int k = 2 ; k <= 9 && ans == 0 ; k++){
				if (init % a == 0 )
					ans = init ; 
				else 
					init = init * k ; 	
			}
			cout << ans << endl ; 
		}
		
	}
return 0 ; 
}