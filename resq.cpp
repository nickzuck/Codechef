/*NICE PROBLEM ....Have to check the editorial for the solution*/

#include<cstdio>
#include<cmath>

using namespace std ; 

int main ()
{
	long int n , t  , x , y , ans ; 
	scanf ("%ld",&t)   ; 
	while (t--)
	{
		scanf ("%ld",&n) ; 
		for (x= sqrt(n) ; x>0 ; x--)
		{

			//printf ("x = %ld  ans = %ld",x , ans )  ;
			if (n % x == 0)
			{
				y = n/x ; 
				ans = y -x ; 
				break ; 
			}
		}
		printf ("%ld\n",ans) ; 
	}

return 0 ; 
}