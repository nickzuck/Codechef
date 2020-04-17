#include<stdio.h>
#include<conio.h>

int main ()
{
	long long int n , stamp , i , sum  = 0  , var ; 
	scanf ("%lld",&n)   ;
	for (i = 0 ; i<n ; i ++) 
	{
		scanf ("%lld",&stamp) ; 
		sum  += stamp ; 
	}
		
		if (n %2 == 0 )
			var = n/2 * (n+1)  ; 
		else  
			var = (n+1) /2  *n ; 
		
		if (sum == var)
			printf ("YES\n")  ; 
		else
			printf ("NO\n")  ; 

getch () ; 
//return 0 ; 
}