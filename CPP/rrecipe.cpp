#include<cstdio>
#include <cstring>

#define MAX 1000002

using namespace std ; 

int main ()
{
	int t , i , len , j ; 
	char str [MAX] ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%s",str) ; 	
		len = strlen (str) ; 
		i = 0 ; 
		j = len-1 ; 
		int count = 0 ; 
		while ( i<= j)
		{

			if (str[i] == '?' && str[j] == '?')
				count += 1 ;
			else if (str[i] == '?' || str[j] == '?')
				count += 26 ; 	
			
		}
		printf ("%d\n",count)  ; 	
	}
return 0 ;

}