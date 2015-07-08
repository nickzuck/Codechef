#include<stdio.h>

#define MAX 100002

int main ()
{
	long long int n , arr[MAX]  , i   , flag ;
	while (1)
	{
		scanf ("%lld",&n)  ; 
		if (n == 0)
			break ; 
		for (i= 1 ; i <= n ; i++)
			scanf ("%lld",&arr[i])  ; 

		flag = 0 ; 
		for (i = 1 ; i <= n ; i++)
		{
			if (arr[arr[i]] != i) 
			{	
				flag = 1 ; 
				break ; 
			}
				
		}
		if (flag == 1 )
			printf ("not ambiguous\n")  ; 
		else 
			printf ("ambiguous\n")  ; 
	} 

return 0 ;
}