#include<stdio.h>

int main ()
{
	int t , n , arr[101]= {0} , i, j , k , m ,count , max_count , temp, var; 
	scanf ("%d",&t);
	for (i = 0 ; i<t ; i++)
	{
		temp = 65500 ; 
		scanf ("%d",&n) ;
		for (j = 0 ; j<n ; j++)
		{
			scanf ("%d",&arr[j]) ; 
		}	
		max_count = 0 ;
		
		k= 0 ;
		for ( j = 0 ; j < n ;j++)
		{
			count = 0 ; 
			if (arr[j] >= 0)
			{
				
				var = arr[k];
				for (m = k ; m<n ;m++)
				{
					if (var == arr[m])
					{
						count ++ ; 
						arr [m] = - 2 ; 
					}
				}	
			
			
				if (count > max_count )  
				{
					max_count = count ; 
					if (var < temp) 
					{
						temp =var ; 
					}
				}
			}
			
			k++ ; 		
			
		} 
	printf ("%d%d", temp , max_count ) ; 
	}

getch ();	
//return 0 ; 
}