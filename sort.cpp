#include<cstdio>
#include<algorithm>

#define MAX  1000002

using namespace std ; 

int main ()
{
	int arr[MAX]  , t  ,i ; 
	scanf ("%d",&t)  ; 
	for (i = 0 ; i<t ; i++)
		scanf ("%d",&arr[i]) ; 
	
	sort (arr  , arr +t) ; 
	
	for (i = 0 ; i<t ; i++)
		printf ("%d\n"  , arr[i])  ; 

return 0 ; 
}