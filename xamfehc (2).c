#include<stdio.h>
#include<string.h>

#define MAX 1003

int main ()
{
	int t , i  , count[27]; 
	char str[MAX]  , ch ;

	for (i = 97 ; i<123  ; i++)
		count [i]  = 0 ; 
	fflush(stdin) ; 
	/*while(str[i] != '\0')
	{
		scanf ("%c",&str[i])  ;
		count [str[i]] ++ ;  
	}*/
	gets(str) ; 

	puts (str) ; 
	fflush (stdin) ; 
	for (i = 97 ; i<123  ; i++)
		printf("count[%d] = %d\n",i,count [i]); 
	
return 0 ; 
}