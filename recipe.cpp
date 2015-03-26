#include<cstdio>
#include<algorithm>

#define MAX 100

int main ()
{
	int n , t , i ,  arr[MAX] , gcd , temp ; 
	scanf ("%d",&t) ; 
	while (t--)
	{
		scanf  ("%d",&n)  ; 
		for (i = 0 ; i<n ; i++)
			scanf ("%d",&arr[i]) ; 
		
		gcd = arr[0] ; 
		for (i = 0 ; i <n ; i++)
		{
			temp = gcd ; 
			while (arr[i] % temp || gcd % temp )
				temp -- ; 
			
			gcd = temp ; 
		}	

		for (i =0 ; i<n ; i++)
			printf ("%d ",arr[i]/gcd)  ; 
	
		printf ("\n")  ; 
	}

return 0 ; 
}