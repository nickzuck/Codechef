#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX  100002

char *strrev(char *) ; 

int main ()
{
	char str[MAX] , copystr[MAX] ,rev[MAX] ;
	int flag  , t, i  ;  					// to check whether we have found any palindrome till now or not  
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%s",str) ; 
		flag = 0 ; 
		for (i = 0 ; i<strlen(str); i++)
		{
			strcpy(copystr,str)  ; 					//copying the value of original string 
			memmove (&copystr[i],&copystr[i+1],strlen(copystr)-i)  ;  // removing a character from the string 
			//printf ("%s",copystr)  ;				
			strcpy (rev , copystr) ; 				// getting the copy of the new string for the reversal 
			strrev (rev)  ; 					//reversing the string after the editing 
			if (strcmp(copystr,rev) == 0)
			{
				flag = 1 ; 
				break ; 
			}
				
		} // for ends

		if (flag ==1 )
			printf ("YES\n") ; 
		else 
			printf ("NO\n") ; 

	}//while ends 			 

return 0 ; 
}

char *strrev(char *str)
{
      char *p1, *p2;

      if (! str || ! *str)
            return str;
      for (p1 = str, p2 = str + strlen(str) - 1; p2 > p1; ++p1, --p2)
      {
            *p1 ^= *p2;
            *p2 ^= *p1;
            *p1 ^= *p2;
      }
      return str;
}