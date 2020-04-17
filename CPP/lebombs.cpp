#include<cstdio>
#include<cstring>

#define MAX 1002

using namespace std ; 

int main ()
{
	char  str[MAX] ;
	int dest[MAX]   ;  
	int count ,n, i ,t ; 
	scanf ("%d",&t);
	while (t--)
	{
		scanf ("%d",&n) ; 
		scanf ("%s",str)  ; 
		for (i = 0 ; i<MAX ; i++)
			dest[i] = 0 ; 
		for ( i = 0 ; i<n ; i++)
		{
			if (str[i] == '1')
			{
				dest[i] = 1 ; 
				if (i > 0 && dest[i-1] == 0)
					dest[i-1]  = 1 ; 
			
				if (i < n-1 && dest[i+1] == 0)
					dest[i+1]  = 1 ; 
			}
	
		}
		count = 0 ; 
		for (i = 0 ;  i<n ; i++)
		{
			//printf ("dest[%d] = %d\n",i,dest[i]) ; 
			if (dest[i] == 0 )
				count ++ ;
		}
		printf ("%d\n",count)  ; 
	}
return  0 ; 
}