#include<stdio.h>
#include<string.h>

#define MAX 50002

long int max  (long int a , long int b )
{
	if (a > b)
		return a ; 
	else 
		return b ; 
}

int main ()
{
	char str[MAX]   ;
	long int i , t , ans , len , cntr ;  
	scanf ("%ld",&t)  ; 
	while (t--)
	{
		scanf ("%s",str)  ; 
		len = strlen (str)  ; 	
		ans = 0 ; cntr = 0 ;
		for (i = 0  ; i < len; i++)
		{
			if (str[i]== '<')
				cntr ++ ; 
			else 
			{
				cntr-- ; 
				if (cntr == 0)
					ans = max (ans , i+1)  ; 
				else if (cntr < 0)
					break ; 
				
			}
		}
		printf ("%ld\n",ans)  ; 
	}
	
return 0 ; 
}