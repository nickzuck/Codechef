/* case 1 is simple */
/*case 2 is always true ....excpet when the n is greater than 360 deg is obvious*/
/*case 3 can be seen that for n disinct pairs whose sum is not same ....We are considering the angles because we may need to break the angles for the completion of the task */ 

#include<cstdio>
#include<cmath>

using namespace std ; 

int main ()
{
	long long int n , t ;
	scanf ("%lld",&t) ; 
	while (t--)
	{
		scanf ("%lld",&n) ; 
		if (fmod(360,n) == 0)
			printf ("y ") ; 
		else 
			printf ("n ") ;
		if (n <= 360 )
			printf ("y ") ; 
		else 	
			printf ("n ") ;
		
		if (((n)*(n+1))/2 <=360)
			printf ("y\n") ;   
		else 

			printf ("n\n") ;
	} 

return 0 ; 
}