#include<cstdio>
#include<cstring>
#include<iostream>

#define MAX 100002

int state  ;   // for state =0 its '-' and for state ==1 its '+'

inline  void ChangeState()
{
	if (state == 1 )
		state = 0 ; 
	else if (state  == 0 )
		state =1 ; 
}
int main ()
{
	int i ; 		//counter 
	int  tests , len , count   ;  
	char s[MAX]  ;
	scanf ("%d",&tests) ;  
	while (tests--)
	{
		count = 0 ; 
		scanf ("%s",s)  ; 
		if(s[0] == '-')
			state = 0 ; 
		else if (s[0] == '+')	
			state = 1 ; 
		len = strlen (s)  ; 
		for (i=1 ; i<len ; i++)
		{
			
			if (state == 1 && s[i] == '+')
			{
				count ++ ; 
				ChangeState () ; 
			}

			else if (state == 0 && s[i] == '-')
			{
				count ++ ; 
				ChangeState () ; 
			}
			
			else 
				ChangeState () ; 

			//printf ("State = %d Character = %c count = %d\n",state , s[i],count)  ; 
		}

		printf ("%d\n",count)  ; 
		
	}

return 0 ; 
}