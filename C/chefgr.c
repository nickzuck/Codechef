#include<stdio.h>

int main ()
{
	int t , sum , n , m ,temp , i ; 

	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%d%d",&n, &m) ;
		sum = 0 ;  
		for(i=0 ; i < n ; i++)
		{
			scanf ("%d",&temp) ; 
			sum = sum + temp ; 
		}
		
		sum = sum + m ; 
		//printf ("sum 1 = \t%d\n",sum) ; 
		sum = sum % n ; 
		//printf ("sum 2 = \t%d\n",sum) ;
		if (sum == 0 )
		
			printf ("Yes\n")  ; 
		
		else 
			printf ("No\n") ; 
	}	
return 0 ; 
}