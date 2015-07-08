#include<stdio.h>

int flag  , b[10000]  ; 
int t , n , m , top ,  a [25] , i , j   ;

void check () ; 

int main ()
{
	 
	scanf ("%d",&t) ; 
	while (t--)
	{
		scanf ("%d%d",&n , &m) ; 
		for (i = 0 ; i< n  ; i++)
		{
			scanf ("%d",&a[i]) ; 
		}
		
		b[0 ] = 0 ; 
		flag = 0 ; top = 0 ; 
		
		for (i = 0 ; i<n ; i++)
		{
			for (j = 0 ; j<flag; j ++)
			{
				top ++ ; 
				b[top]  = a[i] + b[j] ; 
				
			}
		flag = top  ; 
		}
		check () ; 
		
	} 
return 0 ; 
}

void check ()
{
	int i ; 
	for (i = 0 ; i<flag ; i++)
	{
		if (b[i] == m)
		{
			printf ("Yes\n") ; 
			return ;
		} 
	}
	printf ("No\n")  ; 
}
