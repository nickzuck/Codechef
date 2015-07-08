#include<stdio.h>

#define MAX  100001
int main ()
{
	long int i , t , n ,freq[MAX]  , input , maxfreq; 
	scanf ("%ld",&t)  ; 
	while (t--)
	{
		for (i = 0 ; i<MAX  ; i++)
			freq[i] = 0 ;		
		scanf ("%ld",&n)  ; 
		for (i = 0 ;i<n ; i++)
		{
			scanf ("%ld",&input)  ; 
			freq [input] ++ ; 
		}
		maxfreq = -1 ; 
		for (i = 0 ; i<MAX ; i++)
		{
			if (freq[i]>maxfreq) 
				maxfreq = freq[i] ;  
		}
		
		printf ("%ld\n",n-maxfreq)  ; 		
	}

return 0 ; 
}