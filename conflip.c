#include<stdio.h>
#include<math.h>

int main ()
{
	long long int t , g , n , i , q ; 
	scanf ("%lld",&t); 
	while (t--)
	{
		scanf ("%lld",&g)  ; 
		while (g--)
		{
			scanf ("%lld %lld %lld",&i , &n , &q ) ; 
			if (fmod (n,2) == 0 || i == q )
				printf ("%lld\n" ,  n/2) ; 
			else 
				printf ("%lld\n" , n/2+1) ; 
		}
	}

return 0 ; 
}