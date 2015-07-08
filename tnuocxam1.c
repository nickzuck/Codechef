#include<stdio.h>

int main ()
{
	int  t , arr [101] , n,j , max_count= 0 , value,count , i , temp , ch ;
	scanf ("%d",&t)  ; 
	while(t -- )
	{
		scanf ("%d",&n)  ; 
		for (i  = 0 ; i < n ; i++)
		{
			scanf ("%d",&arr[i] ) ; 
		}
	// SORTING THE ARRAY 
		for(i=1;i<n;i++)
			{
    				  temp=arr[i];
     				 j=i-1;
      				while((temp<arr[j])&&(j>=0))
				{
      					arr[j+1]=arr[j];
       		 		  	j=j-1;
      				}
     		 	arr[j+1]=temp;
			}
	// SORTED ARRAY 
		/* for (j = 0 ; j< n; j++) printf ("%d\t",arr[j])  ;
		printf ("\n")  ; */  
		for (i= n-1 ; i>=0 ; )
		{
			count = 0 ; 
			ch = arr[i]  ; 
			while (arr[i] == ch)
			{
				count++ ;
 				i -- ; 
			}	
			if (count >= max_count)
			{
				max_count = count ; 
				value = ch  ; 
			}
		}
	printf ("%d %d\n",value, max_count)  ; 
	}
return 0 ; 	 
}