#include<iostream>
#include<cmath>

#define MAX 100002

using namespace std ; 

int main ()
{
	int t  , i  ,  n , a[MAX]  ; 
	cin >>t ; 
	while (t--)
	{
		 for (i = 0 ; i<MAX ; i++)
			a[i]  = 0 ; 
		cin >> n ; 
		for (i = 0 ; i<n ; i++)
		{
			int temp ; 
			cin >> temp ; 
			a[temp] ++ ; 
		}

		int ans = 0  ; 
		for (i =0 ; i<MAX ;i++)
		{
			if (a[i] > 0)	
				ans ++ ; 	

		}
		cout << ans <<endl ; 
	}

return 0 ; 
}