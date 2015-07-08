#include<stdio.h>


int main ()
{
		int cr[30]  , pie [30]  , i , j , n , t , k, temp ,count;
		
		scanf ("%d",&t)  ; 
		
		for (k = 0 ; k< t ; k++)
		{
			scanf ("%d",&n)  ; 
			for (j = 0 ; j< n ; j++)
			{	
			scanf ("%d",&cr[j]) ;
			}

	/*SORTING THE CR ARRAY*/
			for(i=1;i<n;i++)
			{
    				  temp=cr[i];
     				 j=i-1;
      				while((temp<cr[j])&&(j>=0))
				{
      					cr[j+1]=cr[j];
       		 		  	j=j-1;
      				}
     		 	cr[j+1]=temp;
			}
	//SORINTG ENDS
			for (j = 0 ; j< n ; j++)
			{	
			scanf ("%d",&pie[j]) ;
			}
	
	//SORTING THE PIE ARRAY		 
			for(i=1;i<n;i++)
			{
    				  temp=pie[i];
     				 j=i-1;
      				while((temp<pie[j])&&(j>=0))
				{
      					pie[j+1]=pie[j];
       		 		  	j=j-1;
      				}
     		 	pie[j+1]=temp;
			}

	// SORTING END (PIE)			 
	
/* PRINTING OF CR ARRAY  for (j = 0 ; j< n; j++)printf ("%d\t",cr[j])  ;
	printf ("\n")  ;  */
/* PRINTING OF PIE ARRAY  for (j = 0 ; j< n; j++) printf ("%d\t",pie[j])  ; 
	printf ("\n")  ; 	*/
		
		// PROCESSING THE PROBLEM
		count = 0 ; 
		i = 0 ; j = 0 ;
		while ( j< n )
		{
			if (cr[i] <= pie[j])
			{
				/*printf ("i =%d\tj =%d\tCR=%d\tpie=%d\t\n",count , i , j,cr[i] , pie[j]) ;*/
				count ++ ; 
				i ++ ;  j++;
				/*printf ("COUNT =\t%d",count) ; */
							 
			}

			else 
			{
				j ++ ; 
			/*printf ("in else statement\n"); */
			}		
		}
	printf ("%d\n" , count) ;					
	}
//getch ();
return 0 ; 	
}