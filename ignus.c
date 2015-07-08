#include<stdio.h>

int main ()
{
	long long int  se , i ,  so , t , flag , n , a  ;
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld",&n) ; 
		se = 0 ; 
		so = 0 ;
		flag = 0 ; 
		for (i = 1 ; i <= n ; i++)
		{
			scanf ("%lld",&a)  ; 
			if (flag == 0)
			{
				so += a ; 
				flag = 1; 
			}
			else if (flag == 1)
			{
				se += a ; 
				flag = 0 ; 
			}
		}

		if (so > se )
			printf ("%lld\n",so)  ; 
		else 
			printf ("%lld\n",se)  ; 
	} 

return 0 ; 
}