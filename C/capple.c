//The solution is the number of distinct number present in the given trees 

#include<stdio.h>

#define MAX 100002

int main ()
{
	long long int a[MAX]  , i ,t , input , n  , count; 
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		count = 0 ; 
		scanf ("%lld",&n)  ; 
		for (i =0 ; i<MAX;i++)
			a[i]  = 0 ; 
		for (i = 0 ;i<n ; i++)
		{
			scanf ("%lld",&input)  ; 
				if(a[input] == 0 )
				{
					count ++ ; 					
					a[input] ++ ; 
				}
			
		}

		printf ("%lld\n",count)  ; 
	}

return  0 ; 
}