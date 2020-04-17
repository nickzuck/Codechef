#include<iostream>

using namespace std ; 

int main ()
{
	long int t , n , temp , i ; 
	cin >> t ; 
	while (t--)
	{
		cin >> n  ; 
		long int min = 111111 , sum = 0 ; 
		for (i = 0 ; i<n ; i++)
		{
			cin >> temp ; 
			sum += temp ; 
			if (temp < min)
				min = temp ; 
		}
		long int ans = sum - (n * min) ; 	
		cout << ans <<endl ; 
	}

return 0 ; 
}