/*SORTING WON'T WORK HERE ...........BECAUSE IN THIS IF THE INPUTS ARE "COdecChef " and codechef ...It will be too tough to find the number of the  common subsequence */

/* so we will be using the concept of frequency map , no matter how much I hate it :/ : /  */ 

#include<cstdio>
#include<string.h>
#include<algorithm>

using namespace std ;

int main ()
{
	int t , i , len  ; 
	char str[100002]  ;  
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
			count += min (a[i],b[i])  ; 
		}
		
		printf ("%d\n",count) ; 
	}

return 0 ; 
}