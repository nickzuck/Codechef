#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std ; 

int main ()
{
	long long int arr[100003] , n , t , i  , k;
	scanf ("%lld",&t);
	while (t--)
	{
		scanf ("%lld %lld",&n , &k) ; 
		long long int total = 0 ; 
		for (i =0 ; i<n ; i++)
		{
			scanf ("%lld",&arr[i]) ; 
			total += arr[i]  ; 
		}
		sort (arr , arr+n)  ; 
		long long int j , l ; 
	if(k<=n/2)
      	  {
            	for(i=0,j=0;i<k;i++)
                	j+=arr[i];
            	for(l=0;i<n;i++)
                	l+=arr[i];
        	}
        	else
        	{
            	for(i=0,j=0;i<n-k;i++)
               	 	j+=arr[i];
            	for(l=0;i<n;i++)
                	l+=arr[i];
        	}
		
		printf ("%lld\n",l-j) ;  
	} 

return 0 ; 
}