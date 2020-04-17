#include<cstdio>
#include<algorithm>

#define MAX 100003

using namespace std ; 

int main ()
{
	long int  n , a[MAX] ,  i , t , max , secmax , sum , toreach, ans  ;
	scanf ("%ld",&t)   ; 
	while (t--)
	{
		sum = 0 ; ans =0 ; 
		scanf ("%ld",&n)  ;
		for (i= 0 ; i<n ; i++)
		{
			scanf ("%ld",&a[i]) ; 
			sum += a[i]  ; 
		}
		toreach = sum /2 ; 
		sort (a , a+n) ; 	
		max = a[n-1]  ; 
		secmax = a[n-2]  ; 
		ans += toreach - max ; 
		ans += toreach - secmax  ; 
		
	printf ("%ld\n",ans)  ;
		
	}

return 0 ; 
}