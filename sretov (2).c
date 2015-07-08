#include<stdio.h>
#include<math.h> 

#define MAX 10000002

int main ()
{
	int n1 , n2 , n3 , freq[MAX]  , i  , temp , count ;
	scanf ("%d %d %d",&n1 , &n2 , &n3 )  ; 

	for (i = 0 ; i<MAX ; i++)
		freq [i] = 0 ; 
	count = 0 ; 

	for (i =0 ; i<n1+n2+n3 ; i++)
	{
		scanf ("%d",&temp)  ; 
		freq [temp] ++ ; 
		if (freq[temp] == 2)
			count ++ ; 
	} 

	printf ("%d\n",count) ; 

	for (i =0 ; i<MAX ; i++)
	{
		if (freq[i] >= 2)
			printf ("%d\n",i)  ; 
	}

return 0 ; 
}