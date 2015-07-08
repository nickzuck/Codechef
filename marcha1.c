#include<stdio.h>
#include<math.h>



int main ()
{
	unsigned int t , n , m , i , j , d[100] , sum , value ; 
	scanf ("%u",&t)  ; 
	while (t--)
	{
	c:	scanf ("%u%u",&n,&m)  ; 
		for (i= 0 ; i<n ; i++)
		{
			scanf ("%u",&d[value])  ;
			//scanf ("%u",&d[j])  ; 
			
		}
		for (i=1 ; i < pow (2,n)  ; i++)
		{
			sum = 0 ; 
			for (j=1 ; j<n ; j++)
			{
				if ((i&(1<<j)))
				{
					sum = sum + d[j]  ; 		
				}
			}
			if (sum == m)
			{
				printf ("Yes\n")  ;
				goto c ; 
			} 
			
		}
		printf ("No\n")  ; 
	}
	
return 0 ; 
}