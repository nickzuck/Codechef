#include<cstdio> 
#include<cmath>

//using namespace std ; 

int main ()
{

	long long int  t ,  n , ans  ;  
	scanf ("%lld",&t) ; 
	while (t--){
		scanf ("%lld",&n) ;  
		int flag = 0 ;
		//div = 1073741824    ;  
		while (n!=0 ){
			n /= 2 ; 
			flag ++ ;  
		}
		ans = pow (2 , flag-1 ); 
		printf ("%lld\n",ans) ; 
		
	}
return 0 ; 
}