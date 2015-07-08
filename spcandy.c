#include<stdio.h>
#include<math.h>

int main()
{
	long long int t , n , k , ans ; 
	scanf ("%lld",&t) ; 
	while (t--)
	{
		scanf ("%lld%lld",&n,&k) ; 
		if (k == 0) 
		{
			printf ("0 %lld\n",n)  ; 	
		}
		
		else
		{
			ans = fmod (n,k) ; 
			printf ("%lld %lld\n", (n/k) , ans)  ; 
		}
		
	}

return 0 ; 
}