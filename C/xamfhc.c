 #include<stdio.h>
#include<string.h>
#include<math.h>
 
#define MAX 10003
 
int main ()
{
	char  a[MAX] ,count[26]  ; 
	int t , i , l , largest , as , k ; 
	scanf ("%d\n",&t)  ; 
	fflush (stdin)  ;
	void _flushlbf (void) ; 
	while(t--)
	{
		gets (a)  ; 
		l = strlen (a)  ; 
		for (i = 97 ; i<122 ; i++)
			count [i]  = 0 ; 
		i = 0 ; 
		while (a[i] != '\0')
		{
			count [a[i]] ++ ; 
			i++ ; 
		}
		void _flushlbf (void) ; 
		largest = count [97]  ; 
		as = 97 ; 
		for (k =97 ; k<=122 ; k++)
		{
			if (largest < count[k])
			{
				largest = count[k]  ; 
				as = k ; 
			}
		}
		printf ("%d %c",largest , as) ;
		void _flushlbf (void) ; 
		fflush (stdin)  ; 
 
		for(i= 0 ; i<l  ;i++)
		{
			if (a[i] == as)
				printf ("?") ; 
			else
				printf ("%c",a[i]) ; 
		} 	
	}
 
return 0 ; 
} 