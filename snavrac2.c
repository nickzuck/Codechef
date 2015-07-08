#include<stdio.h>

#define MAX 10002

int main ()
{
	int cars[MAX]  ,  i ,  n , t  , ans ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%d",&n)  ; 
		for (i= 0 ; i<n ; i ++)
			scanf ("%d",&cars[i])  ; 
		ans = n  ; 
		for (i = 0 ; i<n-1 ; i++)
		{
			if (cars[i+1] > cars[i]) 
				ans -- ; 	
		}

		printf ("%d\n",ans) ; 
	}

return 0 ; 
}