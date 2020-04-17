#include<stdio.h>
#include<conio.h>

int main ()
{
	int array[100002]   ,n,c , d  , swap;
	scanf ("%d",&n) ; 
	for (c= 0 ; c<n ; c++)
	{
		scanf ("%d",&array[c])  ; 
	}
	
		for (c = 0 ; c < ( n - 1 ); c++)
	 	{
    			for (d = 0 ; d < n - c - 1; d++)
    			{
      				if (array[d] > array[d+1]) /* For decreasing order use < */
     		 		{
       					 swap       = array[d];
      	 				 array[d]   = array[d+1];
      	  				array[d+1] = swap;
    	  			}
   			 }
		}	
		//printf ("Ia am here ")  ; 
		
		for (c= 0 ; c<n ; c++)
		{
			printf ("%d\n",array[c])  ; 
		}

getch (); 
//return 0 ; 
}
