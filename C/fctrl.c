#include<stdio.h>
#include<conio.h>
#include<math.h>

#define MAX 32768

long long int fact (int) ;
int cnt  (long long int);

int main ()
{
	int number[MAX],count[MAX],i,test;
	long long int result[MAX];
	
	
	//INPUT
	scanf ("%d",&test);
	for(i=1;i<=test;i++)
	{
		scanf("%d",&number[i]);
	}

	//PROCESS
	for(i=1;i<=test;i++)
	{
		result[i]=fact(number[i]);
printf("\nresult=%ld",result[i]);
		count[i]=0;
printf("\nintial count=%d",count[i]);
		count[i]=cnt(result[i]);
printf("\nfinal count=%d",count[i]);
	}

	//OUTPUT
	for ( i = 1; i <=test; i++)
	{
		printf("%d\n",count[i]);
	}
getch();
}

long long int fact(int n)
{
	long long int k ;
	int count ; 
	if(n==1)
	return(1);
	else

		k=n*fact(n-1);
	return k ;  
}
int cnt (long long int fa)
{
	int zeros = 0;
	int rem =0; 
	do
	{
		
		rem  = fa %10;
		fa =fa/10;
		zeros = zeros++;
		//printf ("\nremainder=\t%d\nsum =\t%d",rem,zeros);
	}while(rem == 0);
	return zeros;
}