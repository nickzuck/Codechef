#include<cstdio>
#include<iostream>
#include<cstring>
//#include<mem.h>

#define MAX 1002

using namespace std ; 

int main ()
{
	int i , n , k , count = 0 ;
	char str[20]  ; 
	bool visit[MAX] = {0} ;  // 1 stands for open and 0 stands for close 
	scanf ("%d %d",&n , &k);
	while (k--)
	{
		scanf ("%s",str) ; // getting the input for every value of k 	

		if ((strcmp(str,"CLOSEALL")) == 0)
		{
			 //memset (visit , 0 , size_t(sizeof(bool))) ;  // TRY WITH THIS 
			for (i = 1 ; i<=n ; i++){
				visit[i] = 0 ; 
			}
			count = 0 ;
		}
		else
		{
			scanf ("%d",&i) ; 
 			if(visit[i] == 1)
			{
				count -- ; 
				visit[i] = 0 ;
			}
			else if (visit[i] == 0)
			{
				count ++ ; 
				visit[i] = 1 ; 
			}
		}
		printf("%d\n",count) ; 
	}	
return 0 ; 
}