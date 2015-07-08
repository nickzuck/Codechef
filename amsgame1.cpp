/* The answer is nothing but the gcd of the given array ...We will be using euler method to detemine the gcd of the given array */

#include<cstdio> 

using namespace std ;

//fnc to calculate the gcd of the number 
int gcd (int a , int b)
{
	if (b == 0)
		return  a  ; 
	else 
		return gcd (b , a%b) ; 
	
}

int main ()
{
	int t , n , a[1003] , i ,ans ;
	scanf ("%d",&t) ; 
	while (t--)
	{
		scanf ("%d",&n)  ; 
		for (i= 0  ; i<n ; i++)
			scanf ("%d",&a[i]) ; 
		ans =  a[0] ; 
		for (i = 1 ; i<n ;i++)
			ans = gcd (ans , a[i])  ;
		printf ("%d\n",ans);
		
	} 

return 0 ; 
}