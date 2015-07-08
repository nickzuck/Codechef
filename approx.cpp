#include<cstdio>
#include<algorithm>

#define MAX 1000009

int main ()
{
	char str [MAX]  ; 
	long int t , k , a , b , j , i ; 
	scanf ("%ld",&t)  ;
	while (t--)
	{
		str [0]  = '3'; 
		str[1] = '.' ; 
		scanf ("%ld",&k)  ; 
		if (k == 0)
			printf ("%c\n",str[0]); 	
		else 
		{
			a = 4687  ; 
			b = 33102 ; 
			j = 2 ; 
			for (i = 0 ; i<k ; i++)
			{
				a *= 10 ; 
				str[j] = (a/b) + '0'  ;  
				a = a % b ; 
				j++ ; 	
			}
			printf ("%s\n",str)  ; 
		}
		
	}
	
return 0 ; 
}