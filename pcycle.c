#include<stdio.h>

#define MAX 10003

/* We will find the cycle's count by starting from the first unvisted site every time and moving on till we find the same element as the first ....Side by side we wiil enter the cycles in the queue (b)....And will put a -1 at the end of the corresponding cycle ....so that to ease while printing the cycles*/

int main ()
{
	int temp, n ,i ,cycle, visited[MAX]  , arr[MAX] , b[2*MAX] , top  ;  
	scanf ("%d",&n) ; 
	for (i =1 ; i<= n ; i++)
	{
		scanf ("%d",&arr[i]) ; 
		visited [i]  = 0  ; 
	}
	top = 0 ; cycle = 0 ; 
	for (i = 1 ; i<=n ; i++)
	{
		/* skip all those cases that are already visited */
		if (visited[i] == 1)
			continue ; 
		
		 temp = arr[i]; 
	 	visited [i]  = 1 ;
		while (1)
		{
			b[top ++]  = i  ; 
			i = arr[i] ; 
			visited [i]  = 1 ; 
			if (temp == arr[i])
			{
				b[top++]  = i ;
				b[top++] = -1 ; 
				cycle ++ ;  
				break ; 
			}  // if ends
			
		} // while ends
	}// for ends 

	printf ("%d\n",cycle) ; 
	for (i = 0 ; i<top ; i++)
	{
		if (b[i] == -1 )
			printf ("\n")  ;
		else 
			printf ("%d ",b[i]) ; 
	}

return 0 ; 
}