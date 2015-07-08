#include<stdio.h>

int main ()
{
	int count ,  arr[110] , max_count =0  , min_value= 1480 , t , i  , j , n  ; 
	scanf ("%d",&t) ; 
	while (t--)
	{
		scanf ("%d",&n)  ; 
		for (i = 0 ; i<n ; i++)
		{
			scanf ("%d",&arr[i]) ; 
		}
		for (i= 0 ; i<n ; i++)
		{
			count  = 0 ; 
			for (j = 0 ; j<n ;j++)
			{
				if (arr[i] == arr[j])
				count ++ ; 
			//printf ("j=%d\tcount=%d\tmax_count=%d\n",j ,count , max_count) ; 
			}
			if (count >= max_count)
			{
				printf ("IN IF\n")  ; 
				max_count =count ; 
	
				if (arr[i] < min_value)
				printf ("arr[%d]=%d\n",i,arr[i]) ; 
					min_value =  arr[i]  ;
				printf ("min_value=%d\n",min_value)  ;  


			} 
			
		}
	printf ("%d %d\n",min_value, max_count) ; 
	}

return 0 ; 
}
