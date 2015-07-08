#include<cstdio>
#include<algorithm>

#define MAX 100002

using namespace std ; 

int main ()
{
	long long int n , R[MAX]  , i , count , d ; 
	scanf ("%lld %lld",&n , &d)  ; 
	
	for (i = 0 ; i<n ; i++)
		scanf ("%lld",&R[i]) ; 
	
	sort (R  , R+n) ; 

	i =0 ; count = 0 ; 
	while ( (i+1) < n)
	{
		if (R[i] >=  (R[i+1]-d))
		{
			count ++ ; 
			i += 2 ; 
		}

		else 
			i++ ;

	}
	printf ("%lld\n",count) ;

return 0 ; 
}