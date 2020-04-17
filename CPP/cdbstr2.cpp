#include<cstdio>
#include<string.h>

#define MAX 2002

int cana (char [] , char [])  ; 

int main ()
{
 	char a[MAX] ,b[MAX] ; 
	int t ; 
	scanf ("%d" ,&t)  ; 
	while (t--)
	{
		scanf ("%s %s",a , b)  ; 
		int count = cana (a , b)  ; 
		printf ("%d\n",count)  ; 
	}

return 0 ; 

}

int cana (char a[], char b[])
{
	int f[127] ,s[127] ,  count =0  , i , lena , lenb ;

	for (i = 65 ; i<=90 ; i++)
	{
		f[i] = 0 ;
		s[i]  = 0 ;  
	}	
	for (i = 97 ; i<=122 ; i++)
	{
		f[i] = 0 ;
		s[i]  = 0 ; 
	}
	
	lena = strlen (a) ;
	lenb = strlen(b) ; 

	for (i = 0 ; i<lena ; i++)
		f[a[i]] ++ ;
	for (i = 0 ;i<lenb ; i++)
		s[b[i]] ++ ; 
	
	for (i = 65 ; i<=90 ; i++)
	{
		if (f[i] != s[i])
			count ++ ; 
	}	 
	
	for (i = 97 ; i<=122 ; i++)
	{
		if (f[i] != s[i])
			count ++ ;
	}

return count ; 
}