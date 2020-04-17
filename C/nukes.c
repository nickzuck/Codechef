#include<stdio.h>

int main ()
{
	long long int a , n , k , i  , flag; 
	scanf ("%lld %lld %lld",&a , &n ,&k)  ; 
	if (n == 0 || a==0)
	{
		for(i =0 ; i<k ;i++) 
			printf ("0 ")  ;
		
	}

	else
	{
		flag = 1 ; 
		n ++ ; 
		for (i =0 ; i<k ; i++)
		{
			if (flag == 1)
			{
				printf ("%lld ",a%n)  ; 
				a /= n ; 
				if (a == 0 )
					flag  =1 ; 
			}
			else if (flag == 0)
			{
				printf ("0 ")  ; 
			}
		}
	}		
	printf ("\n")  ; 

return 0 ; 
}