#include<stdio.h>

int main ()
{
	int t , n , k  , i  , loc ; 
	long int a[103]  , value  ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%d",&n)  ;
		for (i =1  ; i<=n ; i++)
			scanf ("%ld",&a[i])  ; 	
		scanf ("%d",&k) ; 

		value = a[k]  ; 
		loc = k ; 

		for (i =1  ; i<=n ; i++)
		{
			if ((i<k) && (a[i] > value) )
				loc-- ; 
			if ((i>k)&& (a[i] < value))
				loc ++ ; 
		}
	
	printf ("%d\n", loc) ; 
		
	}
	
return 0 ; 
}