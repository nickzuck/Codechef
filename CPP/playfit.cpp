/* First I thought of using an AUXILLARY array which will store the value of a[i+1] - a[i] , and after sorting it was may be able to get the answer ..But the problem is that if the answer is not b/w a[i+1] and a[i] */ 
/* so the solution can be framed as given according to the editorial */
/* That is we will keep the min and ans at the same time and get the final answer */

#include<cstdio>
#include<algorithm>

using namespace std ; 

int main ()
{
	long long int minm , ans , cur , t , n, i ;
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld",&n); 
		minm = 9223372036854775807    ;  // max value of long int 
		ans = 0 ; 
		for (i = 0 ; i<n ; i++)
		{
			scanf ("%lld",&cur)  ; 	
			ans = max(ans , cur - minm)  ; 
			minm = min (minm , cur )  ; 
			
		}	
	if (ans<=0)
		printf ("UNFIT\n")  ; 
	else 
		printf ("%lld\n",ans) ; 
	} 

return 0 ; 
}

 
