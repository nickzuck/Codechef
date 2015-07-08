#include<cstdio>
#include<algorithm>

#define MAX 10002

using namespace std ; 

int main ()
{
	long long int i ,  t , n , m , sum1 , sum2 , diff , a[MAX] ; 
	scanf ("%lld",&t) ; 
	while (t--)
	{
		scanf ("%lld%lld",&n , &m) ; 	
		for (i = 0 ; i<n ; i++)
		{
			scanf ("%lld",&a[i])  ; 
		}
		
		sort (a , a+n)  ; 
		/*for (i = 0 ; i<n ; i++)
		{
			printf ("%lld \t",a[i])  ; 
		}*/	
		sum1 = 0 ;  sum2 = 0 ; 
		for (i = 0 ; i<m  ; i++)
			sum1 += a[i]  ; 
		
		for (i = m ; i<n  ; i++)
			sum2 += a[i]  ; 

		if (sum1 > sum2)
		{
			diff = sum1 - sum2 ; 
			printf ("%lld\n",diff) ;
		}
		
		else 
		{
			diff = sum2 - sum1 ; 
			printf ("%lld\n",diff)  ; 
		}
	
	}

return 0 ; 
}