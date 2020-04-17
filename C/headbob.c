#include<stdio.h>
#include<string.h>

int main ()
{
	char str[1002]  ; 
	int i , length , t, n  , flag;
	scanf ("%d",&t)  ; 
	while (t--)
	{
		fflush (stdin)   ; 
		flag = 1 ; 
		scanf ("%d",&n)  ; 
		for (i=0 ; i<n ; i++)
		{
			scanf ("%c",&str[i])  ; 
		}
		
		for (i=0 ; i<n ; i++)
		{
			if (str[i] == 'I')
			{
				printf ("INDIAN\n")  ;
				flag = 0 ;   
			}		
			if (str[i] == 'Y')
			{
				printf ("NOT INDIAN\n") ;
				flag = 0 ; 
			}
			 			
		}
		if (flag)
			printf ("NOT SURE\n") ; 
	}
 
return 0 ;
}