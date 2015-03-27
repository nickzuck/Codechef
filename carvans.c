#include<stdio.h>
#include<math.h>

#define  MAX 10002

//int min (int , int) ; 

int main ()
{
	int m , n , a[MAX] , car , t , i ; 
	scanf ("%d",&t) ; 
	while (t--)
	{
		scanf ("%d",&n)  ; 
		for (i = 0 ; i<n ; i++)
			scanf ("%d",&a[i]) ; 
		car = 1 ; 
		m = a[0] ; 
		for (i = 1 ; i<n ; i++)
		{
			if (a[i] < m)
			{
				m = a[i]  ; 
				car ++ ; 
			}
		}
	
		printf ("%d\n",car)  ;  	
	}
return 0 ; 
}	
/*
int min (int a , int b )
{
	if (a > b )
		return b ; 
	else 
		return a ;  
}*/