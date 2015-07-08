#include<stdio.h>
#include<string.h>

int main ()
{
	long long int  t , n , i ,  ans , count; 
	char string[100000] ;
	
	scanf ("%lld",&t)  ; 
	
	while (t--)
	{
		scanf ("%lld",&n) ; 
		count = 0 ;
		fflush(stdin)  ; 
		//printf ("n=%lld\n",n)  ; 
		scanf ("%s",&string) ; 
		//printf ("%s",string) ; 
		//printf ("second element = \t%c\n",string[1])  ; 
		for (i = 0 ; i<n ; i++)
		{
			//printf ("%c\t" ,string[i]) ;
			if (string[i] == '1')
				count ++ ; 
			
		}
		fflush(stdin)  ; 
		ans = ((count+1) *count ) / 2 ; 
		printf ("%lld\n",ans )  ; 
		

	}
return 0 ; 
}