// HEADER FILES
#include<stdio.h>

// MAIN 
int main ()
{
	long long int a , b , t ;   // VARIABLE DECLARATION 

	// PROGRAM STARTS NOW
	scanf ("%lld",&t) ; 
	while (t--)  
	{
		scanf ("%lld%lld",&a , &b) ; 
		if (a>b)
 			printf ("%lld",a) ; 
		else 
			printf ("%lld",b)  ; 
		printf (" ")  ; 
		printf ("%lld\n",a+b) ; 
	}

return 0 ; 	//RETURN TYPE    
}