/*CHEF AND GIFT */

#include<stdio.h>

#define MAX 55

int main ()
{
	int i,  n , k , a[MAX]  , t  , count; 
	scanf ("%d",&t) ; 
	while (t--)
	{
		scanf ("%d%d",&n , &k) ; 
		count = 0 ; 
		for (i= 0 ; i<n  ; i++ )
		{
			scanf ("%d",&a[i])  ; 
		}
		
		for (i= 0 ; i<n  ; i++ )
		{
			if (a[i] % 2 == 0)
				count ++ ; 
		}
		if (k == 0 && count == n)
			printf ("NO\n")  ; 
		else if (count >= k)
			printf ("YES\n")  ; 
		else 
			printf ("NO\n")  ; 
	}

return 0    ; 	
}