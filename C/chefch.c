#include<stdio.h>
#include<string.h>

#define MAX 100003

int main ()
{
	int i , t , len , count  , plus , minus;
	char s[MAX] ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		plus = 0 ;minus = 0 ;
		scanf ("%s",s)  ; 
		len = strlen (s)  ; 
		for (i = 0 ; i<len ; i++)
		{
			if  (i%2 != 0 )
			{
				if (s[i] == '-')
					minus ++ ; 
				else
					plus ++ ; 
			}
			else 
			{
				if (s[i] == '+')
					minus++ ;
				else 
					plus ++ ;
			}
		
		
		}
		if (plus < minus)
			count = plus  ; 
		else 
			count = minus ; 
	
		printf ("%d\n",count)  ; 
	} 


return 0 ; 	
}