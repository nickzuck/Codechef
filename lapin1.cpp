#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>


using namespace std ; 

int main ()
{
	int len , t ,  i , flag ; 
	char s [1002]  , part_1 [503] = {'0'}, part_2[503] = {'0'}, c  ; 
	scanf ("%d",&t) ;
	fflush (stdin)  ; 
	while (t--) 
	{
		gets (s)  ; 
		len = strlen (s)  ; 
		sort (s , s+floor (len/2)) ; 
		sort(s+ceil (len/2)  , s+len) ; 
		flag = 0 ; 
		for (i = 0 ; i<floor(len/2)  ; i++  ; j = ciel(len/2)  ; j<len ; j++)
		{
			if (s[i]  != str [j]) 
				flag =1 ;
		}
	
		if (flag ==1)
			printf ("No\n") ; 
		else 
			printf ("Yes\n")  ; 
		
	}

return 0 ; 	
}
