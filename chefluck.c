#include<stdio.h>

int main ()
{
	long int t , n , fours , seven , i, flag ;
	scanf ("%ld",&t)  ; 
	while (t--)
	{
		scanf ("%ld",&n) ; 
		flag = 0 ; 
		for (seven = 0 ; seven<28 && seven<=n ;seven+= 4 )
		{
			fours = n- seven ; 
			if (fours % 7 == 0 )
			{
				printf ("%ld\n",fours) ;
				flag = 1 ; 
				break ; 
			}		
		}
	
		if (flag == 0)
			printf ("-1\n") ; 
	}

return 0 ;  
}