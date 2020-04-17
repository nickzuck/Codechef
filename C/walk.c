#include<stdio.h>

int main ()
{
	long int t , a[100000] , n , i  ,max = 0 ;
	scanf ("%ld",&t)  ; 
	while (t--)
	{
		max = 0 ; 
		scanf ("%ld",&n)  ; 	
		for (i =1 ; i <= n ; i++)
		{
			scanf ("%ld",&a[i])  ; 
			if ((a[i]+i-1)>max)
			{
				max = a[i]+i-1;
				//loc = i ; 
			} 
		}		
	printf ("%ld\n",max)  ; 
	} 
return 0 ; 
}