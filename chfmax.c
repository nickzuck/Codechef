#include<stdio.h>
#include<string.h>
 
int main ()
{
	int t , i , j  , loc   , len  , count , max_count  , temp ,var ;  
	char str[1003]   , ch ; 
	scanf ("%d\n",&t)  ;
	while (t--)
	{
		gets  (str)  ;
		len = strlen (str)  ; 
		max_count = 0 ; 
		for (i = 0 ; i < len ; i++ ) 
		{
			ch = str[i] ;
			count = 0 ;  
			for (j = 0 ; j < len ; j++)  
			{
				if (ch == str[j])
					count ++ ; 
			}	
			if (max_count < count)
			{
				max_count = count ; 
				loc = i ; 
			}
 
			else if ( max_count == count)
			{
				temp = str [loc] ;
				var = str [i] ; 
				if (temp > var )   
					loc = i ; 
			}
				
		}
 
		ch = str[loc]  ; 
		for (i = 0 ; i<len ; i++)
		{
			if (str [i] == ch)
				str[i] = '?'  ; 
		}
		puts (str)  ; 		
	}
 
return 0 ; 
} 