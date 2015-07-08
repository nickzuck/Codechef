#include<string.h>
#include<stdio.h>

#define MAX 100002

int main ()
{
	unsigned long int t , i , max , bal , len ; 
	char str[MAX] ; 
	scanf ("%ld", &t) ; 
	while (t--)
	{
		bal = 0 ; max = 0 ; 
		scanf ("%s",str) ; 
		len = strlen (str) ; 
		for (i = 0 ; i < len ; i++)
		{
			
			if ( str[i] == '(' )
				bal ++ ; 
			else 
			{
				bal -- ;
				if ( bal <= 0)
					bal = 0 ; 
			}
			
			max = max > bal ? max : bal ; 				}

		for (i = 0 ; i<max ; i++)
			printf ("(") ; 
			
		for (i = 0 ; i<max ; i++)
			printf (")") ;
		printf ("\n")  ;  
	}
return 0 ; 
}