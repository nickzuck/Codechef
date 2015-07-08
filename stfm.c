#include<stdio.h>

#define MAX 100002

long long int fact (long long int a )
{
	long long int ans = 1 , i  ; 
	for (i =2 ; i<=a ; i++)
		 ans = ans*i  ; 
return ans ; 
}
long long int func(long long int a , long long int m  )
{
	long long int i , ans =0  ; 
	for (i = 1 ; i<=a ; i++)
	{
		ans += (i*(fact(i) + i)) % m  ; 
	}
return ans ; 
}

int main ()
{
	long long int n , m , p[MAX]  , i , sum =0 ; 
	scanf ("%lld %lld",&n,&m);
	for (i = 1 ; i<=n ; i++)
	{
		scanf ("%lld",&p[i])  ; 
		sum += func(p[i] , m ) ; 
	}
	printf ("%lld\n",sum%m)  ; 

return 0 ; 
}