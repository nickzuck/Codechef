#include<stdio.h>
#include<string.h>

int main ()
{
	char s[102]   ;
	int sum , i , len , a[150] ,t ;
	scanf("%d",&t) ; 
	while (t--)	
	{
		scanf ("%s",s)  ; 
		len = strlen(s) ; 
		for (i = 'a' ; i<= 'z' ; i++)
			a[i]  = 0 ; 
		for (i = 'A' ; i <= 'Z' ; i++)
			a[i]  =  0 ; 
		for (i = 0 ; i<len ; i++)
			a[s[i]] ++;
		sum = 0 ; 
		for (i ='a'  ; i<'z' ; i++)
			sum = sum + (a[i] +1)  / 2; 
		for (i = 'A' ; i<'Z'  ; i++)
			sum = sum + (a[i] +1) /2 ; 
		
	printf ("%d\n",sum) ; 	
			
	} 
	
return 0 ;
}