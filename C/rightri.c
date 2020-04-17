#include<stdio.h>
#include<math.h>

int main ()
{
	double a , b,c ; 
	int x[5] ,y[5] , i ; 
	long int t , count = 0 ;
	
	scanf ("%ld",&t)  ; 
	while (t--)
	{
		for (i = 0 ; i<3 ; i++)
		{
			scanf ("%d%d",&x[i],&y[i])  ;
		}
	
		a = pow ((x[2]-x[1]),2) + pow ((y[2]-y[1]),2) ;
		b = pow ((x[1]-x[0]),2) + pow ((y[1] - y[0]),2)  ; 
		c = pow ((x[2]-x[0]),2)  + pow ((y[2]-y[0]),2)  ;
	
		if (c == a+b || b == a+c || a == b+c)
		{
			count ++ ; 
		}	
		
	} 
	printf ("%ld",count) ; 

return 0 ; 
}