#include<cstdio>
#include<algorithm>

#define MAX 1002 

using namespace std ; 
int main ()
{
	int t , i , j , m , n   , s[MAX] , flag = 0 , temp ; 
	scanf ("%d",&t); 
	while (t-- )
	{
		bool  arr[MAX] = {false} ; 
		scanf  ("%d %d",&n , &m) ; 
		flag = 0 ; 
		for (i = 1 ; i<=m ; i++) 
		{
			scanf ("%d",&temp) ;
			arr[temp]  = true ; 
 		}
			j =1 ; 
		for (i = 1 ; i<=n ; i++)
		{
			if (arr[i]== false && flag == 0 )
			{
				printf ("%d ",i);
				flag =1 ; 
			}
	
			else if (arr[i] == false && flag == 1) 
			{
				s[j] = i ;
				j++ ; 
				flag = 0 ; 
			}
 		}
		
		printf ("\n")  ; 
		for (i =1 ;i<j ; i ++)
			printf ("%d ",s[i])  ; 
		printf ("\n") ;
 
	}

return 0 ; 
}