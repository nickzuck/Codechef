#include<stdio.h>

int main ()
{
	int array[3], n=3,swap,c,d;
	scanf ("%d%d%d",&array[0],&array[1],&array[2])	;
	
	while (array[0]!=0 || array[1]!=0 || array[2]!=0)
	{
	
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
		printf("%d\n",array[1]);
		scanf ("%d%d%d",&array[0],&array[1],&array[2]);	
	}
return 0 ; 
}