#include<stdio.h>


int main ()
{
	int A[1000]  ,  N[100000] , i , temp = 0  ,t  , count , max_count = 0  , j  ;
	scanf ("%d",&t) ; 
	for (i = 0 ; i <t ; i++)
	{
		scanf ("%d",&N[i])  ; 
	}
	
 	
c:	j= 0 ; 
	count = 0 ;
	for (i = temp ; i < t ; i ++)
	{
		temp ++  ; 
		if (N[i])
		{
			A[j]  = N[i]  ;
			//printf ("a[j] =%d\n",A[j]) ;   
			j++ ; 
			count ++ ; 
			if (count > max_count)
				max_count = count ;   
			/*printf ("N[%d]=%dcount = %d\n",i,N[i], count)  ; 
			printf ("count=%d max_count =%d\n",count,max_count)  ; */
		}
		else
		{
		 			
			goto c ;
		}
	}

	printf ("%d\n",max_count)  ; 
return 0  ;	 
}