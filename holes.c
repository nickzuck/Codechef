#include<stdio.h>
#include<string.h>


int main ()
{
	int t, i , j , holes ,length;
	char str[100] ,ch;  
		
	scanf ("%d",&t) ; 
	for(i=1 ; i <= t ; i++)
	{
		scanf ("%s",str);
		holes = 0 ;
		length = strlen(str);
		for(j=0 ; j<length;j++)
		{
			ch = str[j] ;
			if((ch=='A') || (ch=='D') || (ch=='O') || (ch=='P') || (ch=='Q') || (ch=='R'))
				holes++;
			else if(ch=='B')
				holes=holes+2;
		}

		printf("%d\n",holes) ;
	}

return 0 ;
}