/* It's just as same as LCPESY ...the only change is that we need to find how many string of J are in S .....we don't have find the common among both  .....where J is the first string */ 

#include<cstdio>
#include<string.h>
#include<algorithm>

using namespace std ;

int main ()
{
	int t , i , len  ; 
	char str[1002]  ;  
	scanf ("%d",&t)  ; 
	while (t--)
	{
		int a[260]= {0} , b[260] = {0}  ; 

		//for first string 
		scanf ("%s",str)  ;
		len  = strlen (str)  ; 
		for (i = 0 ; i<len; i++)
			a[str[i]] ++ ;  
		
		//for second string 
		scanf ("%s",str)  ;
		len  = strlen (str)  ; 
		for (i = 0 ; i<len; i++)
			b[str[i]] ++ ;  


		//PROCESSING THE OUTPUT 
		int count = 0 ; 
		for (i = 0 ; i<256 ; i++)
		{
			if (a[i] > b[i])
				count += b[i] ; 
			else 
				count += a[i] ; 
		}
		
		printf ("%d\n",count) ; 
	}

return 0 ; 
}