//Header Files 

#include<cstdio>
#include<algorithm>

#define MAX 10002 		// for array size

using namespace std ; 

int main ()
{
	long long int t , n , arr[MAX]  , i  , j , sum ;  // variable declaration
	scanf ("%lld",&t);  
	for (i = 1 ; i<=t ; i++)
	{
		scanf ("%lld",&n)	 ; 
		
		for ( j =0 ; j<n ; j++)
			scanf ("%lld",&arr[j])  ; 

		sort (arr  , arr+n)  ;  // sorting the array
			
		sum = 0 ;  // intitalizes the sum to 0 
		sum  = arr[n-1]  + arr[n-2] + arr[n-3]  ; 
	

		printf ("Case %lld: %lld\n", i , sum) ; 
	}
return 0 ; 
}