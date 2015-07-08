#include<stdio.h>
#include<math.h>

int main ()
{
	long long int t , n , ans ; 
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld",&n)  ; 
		n = sqrt (n)  ; 
		ans = ((n)*(n+1)*(2*n +1)) / 6 ; 
		printf ("%lld\n",ans)  ; 
	}

return 0 ; 
}