#include<stdio.h>

int main ()
{
	long long int  arr[10000]  , s ; 
	int t  , n , count  , i   ; 
	scanf ("%d",&t) ; 
	while (t--)
	{
		scanf ("%d",&n)  ; 
		for (i = 0 ; i<n ; i++)
		{
			scanf ("%d",&arr[i])  ; 
		}
		
		s = arr[1]   ; 
		count = 1 ; 
		for (i = 1 ; i<n-1 ; i++)
		{
			if (s >= arr[i])  
				count ++ ; 
			s= arr[i]  ; 
		}

		printf ("%d\n",count)  ; 
	}

return 0 ; 
}