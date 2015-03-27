#include<stdio.h>
#include<string.h>
#include<math.h>

#define  mod 1000000007

int main ()
{
	long long int t , i , len , flag , ans ; 
	char  str [100001]  , ch ; 
	scanf ("%lld",&t); 
	while (t--)
	{
		scanf ("%s",str) ; 
		ans = 1 ;
		flag = 0 ; 
		len = strlen (str)  ; 
		for (i= 0 ; i<len ; i++)
		{
			//printf ("Initially ans = %d",ans) ; 
			if (flag == 0 )
			{
				if (str[i] == 'l')
				{
					ans = fmod ((2*ans) ,mod) ; 
					//printf ("in  l flag = %lld and ans = %lld\n",flag, ans) ; 
					
				}
				else if (str[i] == 'r')
					ans =fmod ( (2*ans + 2) ,mod ); 

				flag = 1; 
			}
			
			else if (flag ==1 )
			{
				if (str[i] == 'l')
				{
					ans = fmod ((2*ans-1) , mod ); 
					//printf ("in  l flag = %lld and ans = %lld\n",flag, ans) ; 
				}
				else if (str[i] == 'r')
					ans = fmod ((2*ans +1) ,mod) ; 
				flag = 0 ; 
			}
		}
		printf ("%lld\n",ans) ; 
	}

return 0 ; 
}