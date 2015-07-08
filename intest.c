#include<stdio.h>

int main ()

{
	 int n , k , i,count=0 ;
	long int t ; 
	scanf ("%d%d",&n,&k);
	for (i =1 ; i<=n;i++)
	{
		scanf ("%d",&t);
		if (t%k == 0) count ++ ;
	}
	printf ("%d",count);
return 0 ;
}