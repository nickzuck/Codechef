#include<stdio.h>
#include<math.h>

int main ()
{
	long long int t , i , n , m , a  , ans ; 
	scanf ("%lld",&t) ;
	while  (t--)
	{
		scanf ("%lld %lld %lld",&n , &a , &m) ; 
		i = a+m ; 
		ans  = fmod(i , n)  ;  
		if (ans == 0)
			printf ("%lld\n",n)  ; 
		else 
			printf ("%lld\n",ans) ; 
	}

return 0 ; 
}