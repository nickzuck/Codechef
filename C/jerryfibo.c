#include<stdio.h>
#include<math.h>

int main ()
{
	long long int t , n  , next  , first , second  , flag ;
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld",&n) ; 
		first = 0 ; second =1 ;  flag = 0 ; next = 0 ; 
		while (n > next)
		{
			next = first + second;
       			  first = second;
         			second = next;
			//printf ("%lld ",next) ; 
			if (next == n)
				flag = 1 ;
		}
	
		if (flag  ==1 )
			printf ("is fibo\n")  ; 
		else 
			printf ("not fibo\n")  ; 
		
	}

return 0 ; 	 
}