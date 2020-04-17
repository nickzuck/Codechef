#include<cstdio>
#include<algorithm>

using namespace std ; 

int main () 
{
	long long int  n , m , t  , i  , arr[100];
	scanf ("%lld",&t)  ;
	while (t--)
	{
		scanf ("%lld %lld",&n,&m)  ; 
		for (i = 0 ; i<n ;i++)
			scanf ("%lld",&arr[i]); 
		sort (arr , arr+n)  ; 
		reverse (arr , arr+n)  ;
		long long int sum = 0 ;
		i = 0 ; 
		while (sum < m)
		{
			sum += arr[i]  ;
			i++ ; 
		}
		printf ("%lld\n",i) ; 
	} 
return 0 ;
}