#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define MAX 100002

int main ()
{
	long long int  n , k , arr[MAX]  , i , max , j  ; 
	scanf ("%lld %lld",&n , &k )  ; 
	for (i = 0 ; i <n ; i++)
		scanf ("%lld" ,&arr[i])  ; 
	if (k == 0 )
	{
		for (i = 0 ; i< n ; i++)
			printf ("%lld " ,arr[i]) ; 
		printf ("\n")  ; 
	}

	else 
	{
		if ( fmod (k , 2) == 1)
			k = 1 ; 
		else 
			k = 2 ; 

		for (j = 1 ; j<=k ; j++)
		{
			max = arr[0]  ; 
			for (i = 1  ; i<n ; i++)
			{
				max = (max > arr[i] ) ? max : arr[i]  ; 
				//printf("MAX = %lld\n",max)  ; 
			}

			for (i = 0 ; i<n ; i++)	
				arr[i]  = max - arr[i] ; 
		}

		for (i = 0 ; i<n ; i++)
			printf ("%lld ",arr[i])  ; 
		printf ("\n")  ;
	} 
return 0 ; 
}

/*
int mof (int a , int b)
{
	if (a > b )
		return a ; 
	else 
		return b ; 
}*/