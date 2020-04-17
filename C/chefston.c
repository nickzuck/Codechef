#include<stdio.h>
#include<math.h>


#define SIZE 100001

int main ()
{
	long long int t , n , a[SIZE] , b[SIZE] , i , temp , max , k ;
	scanf ("%lld",&t)  ; 
	while(t--)
	{
		scanf ("%lld %lld",&n , &k)  ;
		max = 0 ; 
		for (i = 0 ; i<n ; i++)
			scanf ("%lld",&a[i]) ;
		for (i= 0 ; i<n ; i++)
			scanf ("%lld",&b[i]) ;
		for (i= 0 ; i<n ; i++)
		{
			temp = (k/a[i])*b[i] ; 
			if (temp > max)
				max = temp ; 
		}	

		printf ("%lld",max) ;
			
	} 
return 0 ; 
}