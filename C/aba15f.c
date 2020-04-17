#include<stdio.h>

int main ()
{
	long long int num , t , div , sum ; 
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld",&num)  ; 
		div = 4294967296 ; 
		sum = 0 ; 
		while (div != 0)
		{
			//printf ("SUM = \t%lld\tDIV =\t%lld\tNUM=\t%lld\n",sum , div, num )  ; 
			if (num / div != 0)
			{
				sum += div ;
				num = num - div ;  
			}
			div = div / 2 ;
			if (num >=  div)
				num = num -div ; 
			div = div / 2 ;  		
		}	
		printf ("%lld\n",sum)  ; 	
	}

return 0 ; 
}