#include<stdio.h> // header files 
int main ()
{
	long long int t , x1 , x2  , v1 , v2 , time , final;	 // variable dec 
	scanf ("%lld",&t) ; 
	while (t--)
	{
		scanf ("%lld %lld %lld %lld",&x1 , &x2 , &v1 , &v2)  ; 
		
		if (x1 == x2)
			printf ("(%lld,0)",x1)  ; 
		else if (v1 <= v2 )
			printf ("not possible\n") ; 

		else 
		{
			time = (x2 - x1) / (v1 - v2)  ; 
			final = x1 + time*v1	; 
			printf ("(%lld,0)\n",final)  ; 
			
		}
	}

return 0 ; 	
}