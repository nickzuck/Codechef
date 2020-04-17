#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()
{
	char S[100002]  ; 
	int t , flag  ; 
	long int  len  , i  ; 
	scanf ("%d",&t)  ; 
	fflush (stdin)  ; 
	while (t--)
	{
		gets (S)  ; 
		len = strlen (S)  ; 
		flag = 0 ; 
		for (i = 0 ; i< len-2 ;i++)
		{
		
			// CHECKING FOR 010 
			if (S[i] == '0')
			{
				if (S[i+1] == '1')
					{
						if (S[i+2] == '0') 
							flag = 1 ; 
					}
			}//matching 010 ends

			// CHECKING FOR THE STRING 101
			else if (S[i] == '1')
			{
				if (S[i] == '1')
				{
					if (S[i+1] == '0')
						{
							if (S[i+2] == '1')
								flag = 1 ; 
						}
				}
			} // matching 101 ends
	
		} // for ends
		

		// OUTPUT 
		if (flag ==1 )
			printf ("Good\n")  ;
		else
			printf ("Bad\n") ; 
	 
	
	} // while ends

return 0 ;
}// main ends