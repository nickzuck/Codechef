#include<stdio.h>
#include<math.h>

int main ()
{
	int x[5]  , y[5]  , r , t , n , count  ,i , dis[5] ;
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%d",&r) ; 
		for (i =0 ; i<3; i++)
		{
			scanf ("%d %d",&x[i] ,&y[i])  ; 
		}

		count = 0 ;  

		n = r*r ; 
		
		dis[0] = (x[1] -x[0]) * (x[1] -x[0]) + (y[1] - y[0]) * (y[1] - y[0]) ; 
		dis[1] = (x[2] -x[0]) * (x[2] -x[0]) + (y[2] - y[0]) * (y[2] - y[0]) ; 
		dis[2] = (x[2] -x[1]) * (x[2] -x[1]) + (y[2] - y[1]) * (y[2] - y[1]) ; 
				
			for (i =0 ; i<3 ; i++)
			{
				if ( n >= dis [i])
					count ++ ;  
			}
				
			if (count >=2 )
				printf ("yes\n") ; 
			else 
				printf ("no\n")  ; 
			
	} 

return 0 ; 
}