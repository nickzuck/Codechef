#include<stdio.h>
#include<math.h>

#define MAX 10002

int main ()
{
	int  t , i , j , swag , flag  ;
	long long int len[MAX]  , b[MAX] ;
	scanf ("%d",&t)  ; 
	for (i = 0 ; i<t ; i++) 
	{
		scanf ("%lld %lld\n",&len[i] ,&b[i])  ; 

		
	}
		
	for (i = 0 ; i<t ; i++) 
	{
		flag = 0 ; 
		for (j = 2 ; j <=sqrt ( len[i] ) ; j++) 
		{
			if ( len[i] % j == 0 )
			{
				flag =1 ; 	
				break ; 
			}
		}
		swag = 0 ;
		for (j = 2 ; j <=sqrt( b[i] ) ; j++) 
		{
			if ( b[i] % j == 0 )
			{
				swag = 1;
				break ; 
			} 
		}

		if (flag == 0)
		{
			len [i]  = len[i]  - 1 ;
			goto c ;  
		}

		if (swag == 0)
		{
			if (b[i] == 3)
				b[i] = 1 ; 
			else 
				b [i]  = b[i]  - 1 ; 
		}

		//printf("Final Array %lld \t %lld\n",len[i] ,b[i]) ; 
		printf ("%lld\n",b[i] * len[i])  ; 
			
	}

return 0 ; 
}




















