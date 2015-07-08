#include<cstdio>
#include<string.h>

#define MAX 50003

int cana (char [], char[] ) ; 

int main ()
{
	char  a[MAX] , b[MAX]  , flag ;
	int t  , i;
	scanf ("%d",&t) ; 
	while (t--)
	{
		scanf ("%s %s",a  ,b)  ; 
		//printf ("%s %s",a,b)  ; 	
		flag = cana(a , b )  ; 
		if (flag ==1 )
			printf ("YES\n") ;  
		else 
			printf ("NO\n")  ; 
	} 

return 0 ; 
}

int cana (char a[], char b[])
{
   int first[28] ,second[28], c = 0;

for (int i = 0 ; i<=26 ; i++) 
{
	first [i]  = 0 ; 	
	second [i]  = 0 ; 
}

   while (a[c] != '\0')
   {
      first[a[c]-'a']++;
      c++;
   }
 
   c = 0;
 
   while (b[c] != '\0')
   {
      second[b[c]-'a']++;
      c++;
   }
 
   for (c = 0; c < 26; c++)
   {
      if (first[c] != second[c])
         return 0;
   }
 
   return 1;
}