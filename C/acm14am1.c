#include<stdio.h> // header file

// main program

int main ()
{
	 int t ,  arr[1002]  , i   , count  , n  , p  ;  // variable declration
			
	scanf ("%d",&t) ;   // test case
	while (t-- )
	{
		count = 0 ; 
		scanf ("%d %d",&n , &p)  ; 
		for (i = 0 ; i<n ; i++)
			scanf ("%d", &arr[i] ) ;
		
		for (i =0 ; i<n ; i ++)
		{
			if (arr[i] >= p )
				count ++ ; 			
		}

		printf ("%d\n",count) ; 
	}

return 0 ; 
}