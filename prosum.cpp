#include<cstdio>
#include<algorithm>

using namespace std ; 

int main ()
{
	long long int n , a  , i , t ;
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld",&n)  ; 
		long long int twos = 0 ; 
		long long int pr = 0 ; 
		for (i = 0 ; i<n ; i++)
		{
			scanf ("%lld",&a) ; 	
			if (a == 2)
				twos ++ ; 
			else if (a >2)
				pr ++ ; 
		}
		
		long long int  ans = (pr*(pr -1)) /2 ; 
		ans += pr * twos ; 
		printf ("%lld\n",ans) ; 
		
	} 

return 0 ; 
}