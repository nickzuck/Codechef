/* Let's try this using brute force appraoch */ 

#include <cstdio>
#include <cstring>

using namespace std ; 

int main()
{
	int t,i,count,k,l;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		char j[101],s[101];
		count=0;
		scanf("%s",j);
		scanf("%s",s);
		for(k=0;k<strlen(s);k++)
		{
			for(l=0;l<strlen(j);l++)
			{
				if(s[k] == j[l])
				{
					count++;
					break;
				}
			}
		}
		printf("%d\n",count);
	}	
	return 0;
} 