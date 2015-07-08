#include<stdio.h>

int main ()
{
	int arr[200]   , t , i , j, n , max_count , count , min_value , var;
	scanf ("%d",&t)  ; 
	while (t--)
	{
		max_count = 0 ; 
		scanf ("%d",&n)  ; 
		for (i= 0 ; i<n  ; i++)
		{
			scanf ("%d",&arr[i])  ; 
		}
		min_value = 14719  ; 
		for (i= 0 ; i<n  ; i++)
		{
			count = 0 ;
			var = arr[i] ; 
			for (j =i ; j<n ; j++)
			{
				if (arr[j] >0)
				{
					if (var ==arr[j]) 
					{
						count ++ ; 
						arr[j] = -1  ; 
					}
				}
			}
			if (count  > max_count)
			{
				max_count = count ; 
				if (min_value > var)
				{
						min_value = var ; 
				}
			}
	
		}
	printf ("%d %d\n" ,min_value , max_count) ; 

	}

return 0 ; 
}