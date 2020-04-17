#include<cstdio>
#include<cstring>

#define MAX 1002

using namespace std ; 

int main ()
{
	char  str[MAX] ; 
	int count ,n, i ,t ; 
	scanf ("%d",&t);
	
	while (t--)
	{
		scanf ("%d",&n);
		count = 0 ; 
		scanf ("%s",str) ; 
		for (i = 0 ; i<n ; i ++)
		{

			if (str[i] == '1' )
			{
				if (i == 0 || i == n-1)
				{
					count += 2 ; 
				}
				else 
					count += 3 ; 
			}

		}	
		printf ("%d\n",n -count) ; 
		
	}
return 0 ; 
}

