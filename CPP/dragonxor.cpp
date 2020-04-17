#include<cstdio>
#include<algorithm>
#include<cmath>

using namespace std ; 

int main ()
{
	unsigned int n , t , a , b , Aone , Bone , Azero , Bzero ; 
	scanf ("%u",&t)  ; 
	while (t--)
	{
		scanf ("%u %u %u",&n,&a , &b )  ; 
		Aone =  0 ; 
		Bone = 0 ; 
		Azero = 0 ; 
		Bzero  = 0 ; 
		unsigned int  p , i , j , x , y ; 
		
		while (a!=0)
		{
			if (a %2 == 1)
				Aone ++ ; 
			a = a/2 ; 
		}
		Azero = n-Aone  ; 
		while (b!=0)
		{
			if (b %2 == 1)
				Bone ++ ;
			 b = b/ 2 ; 
		}
		Bzero = n - Bone ;
		
		x  = min (Aone , Bzero)  ; 	
		y = min (Azero , Bone) ; 
		p = x+y ; 
		
		unsigned int ans = (1<<p) -1 ; 
		ans = ans << (n-p)  ;  
		printf ("%u\n",ans) ;
	}

return 0 ; 
}