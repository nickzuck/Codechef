#include<cstdio>
#include<cmath>

#define mod 1000000007

long long int pow_mod (long long int base , long long int exp)
{
	long long int ans = 1 ; 
	while (exp > 0)
	{
		if (exp &1 )
			ans = (ans *base) % mod ; 
		base = base * base ; 
		base %= mod ; 
		exp >>= 1 ; 
	}
return ans%mod ;  
}

int main ()
{
	long long int n , k , ans , t ;
	scanf ("%lld",&t) ; 
	while (t--)
	{
		scanf ("%lld",&n)  ; 
		ans = pow_mod (2,n) ; 
		printf ("%lld\n",ans-1)  ; 		
	} 

return 0 ; 
}