/*TRYING A LAME SOLUTION WITH COMPLEXITY EQUALS TO O(n2) and O(n) */

#include<stdio.h>

int main ()
{
	int i, j ,  t , n , a[102] , gcount , lcount ;  
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%d",&n) ; 
		for (i =1 ;i<=n ; i++)
			scanf ("%d",&a[i])  ; 
		gcount = 0 ; lcount = 0 ; 
		
		/*Calculating global count with complexity O(n2) */
		for (i = 1 ; i<=n ; i++)
		{
			for (j =i+1 ; j<=n ; j++)
			{
				if (a[i] > a[j])
					gcount ++ ; 	
			}
		}

		/* Calculating local inversion in O(n) */
		for (i = 1  ; i<n ; i++)
		{
			if (a[i] > a[i+1])
				lcount ++ ;  
		}

		if (gcount == lcount)
			printf ("YES\n")  ; 
		else 
			printf ("NO\n")  ; 
				 
			
	} 

return 0 ;
}