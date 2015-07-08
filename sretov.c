#include<stdio.h>
#include<math.h>

#define MAX  500002

/*Use frequency map for checking the times ID's appearing in the list ,if it is >=2 then count and print it else skip it */

int main ()
{
	int  n[5] , freq[MAX]  , arr[MAX ] , count , i  , j , k ;
	
	for (i = 0 ; i<50001 ; i++)
		freq[i] = 0 ; 

	scanf ("%d %d %d",&n[0] , &n[1]  , &n[2])  ; 
	count = 0 ; 
	for (i = 0 ; i<3 ; i++)
	{
		for (j = 0 ; j<n[i] ; j++)
		{
			scanf ("%d" ,&arr[j])  ; 
			freq [arr[j]] +=  1 ; 
			//printf ("ele =%d  fre = %d\n" ,arr[j], freq[arr[j]])  ; 
			if (freq [arr[j]]  == 2)
				count += 1 ; 
			//printf ("%d",count)   ; 
		}
	}

	printf ("%d\n",count)  ; 
	k = 0 ; 
	while (k < 50001)
	{
		//printf ("frequecy of %d\n is %d\n" , k , freq[k])  ; 
		if (freq[k]  >= 2 )
			printf ("%d\n",k)  ; 
		k++ ; 
	}
return 0 ; 	 
}