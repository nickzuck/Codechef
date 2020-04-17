#include<stdio.h>
#include<math.h>

 

long long int chk_prime (long long int ) ; 
int main ()
{
	long long int t , i , j , var , num ; 
	scanf ("%lld",&t) ; 
	for (i= 0 ; i<t  ; i++)
	{
		scanf ("%lld %lld\n",&num ,&var) ; 
		num = chk_prime (num ) ;
		var = chk_prime (var)  ; 
		printf ("%lld\n",var*num)  ; 
		
	}
	
return 0 ;
}

long long int chk_prime (long long int  a ) 
{
	int  j , flag  ;
	flag = 0 ;
	for (j= 2 ; j <= sqrt (a)  ; j++)
	{
		if (a % j== 0)
		{
			flag = 1;
			break ; 
		} 
	}
	printf ("Here \n")  ; 
	if ( flag == 0) 
	{
		 a-- ; 
		chk_prime (a) ; 
	}
		
	else 
		return a ; 
	
}