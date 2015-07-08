#include<stdio.h>
#include<math.h>

int main ()
{

	long long int t , n , k , tr , an , final; 
	scanf ("%lld",&t) ; 
	while (t--) 
	{
		scanf ("%lld%lld",&n , &k)  ; 
		if (n % 2 == 0 )
			tr = ((n) * (n-1) * (n-2)) /6 ; 
		else 
			tr = ((n-1) * n * (n-2)) /6; 
		
		if (k %2 == 0)
			an = ((k) * (k-1) * (k-2)) /6 ; 
		else 
			an =  ((k-1)*k*(k-2))/6  ; 

		final = tr -an ; 
		printf ("%lld\n",final)  ; 		
		
	}

return 0 ; 
}


