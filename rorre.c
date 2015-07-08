#include<stdio.h>
#include<string.h>

int main ()
{
	int i , len , t , flag; 
	char S[100002]  ; 
	scanf ("%d",&t) ; 
	fflush (stdin)  ; 
	while (t--)
	{
		flag =1 ; 
		gets(S)  ;
		len = strlen(S) ; 
		for(i =0 ; i<(len-2)&&flag ; i++) 
		{
			if ((S[i] == '0' && S[i+1] == '1' && S[i+2] == '0') || (S[i] == '1' && S[i+1] == '0' && S[i+2] == '1'))
			flag = 0 ; 
		}
		if (flag)
			printf ("Bad\n") ; 

		else 
			printf ("Good\n")  ; 
		
	}

return 0 ; 
}