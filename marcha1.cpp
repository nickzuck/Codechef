#include<cstdio>
#include<algorithm>

using namespace std ; 

int main ()
{
	int m , i , t , n , arr[22] , j   ; 
	scanf ("%d",&t) ; 
	while (t--)
	{
		scanf ("%d %d",&n , &m) ; 
		for (i = 0 ; i<n ; i ++)
			scanf ("%d",&arr[i]) ; 
		sort (arr , arr+n )  ; 

		printf ("AFter Sorting Output of the array\n")  ; 
		for (j = 0 ;  j<n ; j++)
			printf ("arr[%d] = %d\n",j,arr[j])  ; 		
		
		for (i = n ; i>=0 ; i--)
		{
			if (arr[i] <= m)
			{
				m = m - arr[i] ; 
				if (m == 0 )
					break ; 
			}
		}

		if (m == 0 ) 
			printf ("Yes\n")  ; 
		else 
			printf ("No\n")  ; 
	} 
return 0 ; 
}