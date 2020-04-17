#include<stdio.h>
#include<string.h>

int main ()
{
	char str[1003] , var ;
	int max ,count , t , i , len  , j ;
	scanf ("%d",&t)  ; 
	fflush(stdin)  ; 
	while (t--)
	{
		i = 0 ; 
		 max = 0 ; 
		while (str[i]  != '\0') 
		{
			scanf ("%c",&str[i])  ; 
			i++ ; 
		}
		fflush(stdin) ; 
		len = i ; 
		for(i = 0 ; i<len ; i++)
		{
			count = 0 ;
			fflush(stdin) ; 
			for (j =i ; j<len ; j++)
			{
				if (str[i] == str[j])
					count ++ ; 
				fflush(stdin) ; 
			}
			
			if (count > max)
				{
					max = count ; 
					var = str[i]  ; 
				}
		}


		printf ("count = %d  var =  %c",count , var)  ; 
	}  
}