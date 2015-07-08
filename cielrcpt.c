#include<stdio.h>

int main ()
{
	int t , i , p , div , count ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%d",&p)  ; 
		count = 0 ; 
		div = 2048 ; 
		for (i =0 ; i <=11 ; i++)
		{
			count +=  p/div ; 
			p = p % div ; 
			div = div/2  ;
		}
		
		printf ("%d\n",count)  ; 
	
	}
return 0 ; 
}