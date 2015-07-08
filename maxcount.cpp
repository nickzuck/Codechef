#include<cstdio>

#define MAX 10002

using namespace std ; 

int main ()
{
	int i  , count[MAX]  , a , j    , t , n , max ,val  ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		
		for (i=0 ; i<MAX ; i++)
			count [i]  = 0 ; 
			
		scanf ("%d",&n)  ; 

		max = 0 ; val = 10009; 
		for (j= 0 ; j<n ; j++)
		{
			scanf ("%d",&a)  ; 
			count [a]++ ; 
			if (count[a] > max) 
			{
				max =  count [a] ; 
				val = a ; 		
			}

			else if (count[a] == max && (a <val) )
			{	
				val = a ; 
			}
		}
		
		printf ("%d %d\n",val, max) ; 
		
		
	}

return 0 ; 
}