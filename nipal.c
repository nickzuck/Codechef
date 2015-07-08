#include<stdio.h>
#include<math.h>
#include<string.h>

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
		part_1[0] = 0 ; 
		part_2[0] = 0 ; 
		for (i = 0 ; i<floor (len/2) ; i++)
		{
			c = s [i] ; 
			part_1[c] ++ ; 

		}

		for(i = ceil(len/2)  ; i<len  ; i++) 
		{
			c = s [i] ; 
			part_2[c] ++ ; 
		}
	
		flag = 0 ; 
		for (i = 97 ; i<122 ; i ++)
		{
			if (part_1[i] == part_2 [i])
				flag = 1 ; 
		}
		
		for (i = 97 ; i <122 ; i ++)
		{
			printf ("Part1 = \t%d\nPart2 =\t%d\n",part_1[i], part_2[i])  ; 
		}
		if (flag == 1)
			printf ("No\n") ; 
		else 
			printf ("Yes\n") ; 
		

	}  


return 0 ; 
}