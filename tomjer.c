#include<stdio.h>
#include <math.h>
int main ()
{
 	long long int t , h , ans ; 
	scanf ("%lld", &t); 
	while (t--)
	{
		scanf ("%lld",&h) ; 
		ans = pow (2 , h-1)  ; 
		ans = fmod (ans, 1000)  ; 
		printf ("%lld\n",ans)  ; 
	}

return 0 ; 
}