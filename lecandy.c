#include<stdio.h>

int main ()
{
	int t , n , sum , a ; 
	long long int c ; 
	scanf ("%d", &t) ; 
	while (t--)
	{
		scanf ("%d%lld", & n , &c) ; 
		sum  = 0 ; 
		while(n--)
		{
			scanf ("%d",&a) ;
			sum = sum + a ; 	
		}
		if (sum <= c)
			printf ("Yes\n") ; 
		else 
			printf ("No\n");	
	

	}

return 0 ;
}