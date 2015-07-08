#include<cstdio>
#include<algorithm>

using namespace std ; 

#define MAX  100002

int main ()
{
	long long int i , j , ops , n , t , arr[MAX];
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld",&n) ; 	
		for (i = 0 ; i<n ;i++)
			scanf ("%lld",&arr[i]) ; 
		sort (arr , arr+n) ;  
		ops = 0 ; i = 0 ; j = n -1 ; 
		int flag = 0 ; 
		while (ops<n)
		{
			if (flag == 0)
			{
				printf ("%lld ",arr[i]) ; 
				flag = 1 ; 
				i++ ; 
				ops ++ ;
			}
			else if (flag ==1 )
			{
				printf ("%lld ",arr[j]) ; 
				flag = 0 ; 
				j-- ; 
				ops ++ ; 
			}
		}
		printf ("\n");
			
	} 

return 0 ; 
}