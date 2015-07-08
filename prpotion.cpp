#include<cstdio>
#include<algorithm>

using namespace std ; 

int main ()
{
	long long int  t , r , g, b , m , i , max[4] , ans , value ; 
	scanf ("%lld",&t)  ; 
	while (t--)
	{
		scanf ("%lld %lld %lld %lld" ,&r ,&g ,&b ,&m)  ; 
		for (i = 1 ; i<=3 ; i++)
		{
			max[i] = 0 ; 
		}
		
		for (i =0 ; i<r ; i++)
		{
			//printf ("in r loop\n")  ; 
			scanf ("%lld" ,&value)  ; 
			if  (value  > max[1])
				max[1]  = value  ; 
		}

		for (i =0 ; i<g ; i++)
		{
			//printf ("in g loop\n")  ; 
			scanf ("%lld" ,&value)  ; 
			if  (value  > max[2])
				max[2]  = value  ; 
		}

		for (i =0 ; i<b ; i++)
		{
			//printf ("in b loop\n")  ; 
			scanf ("%lld" ,&value)  ; 
			if  (value  > max[3])
				max[3]  = value  ; 
		}

		for (i =0 ; i<m ; i++)
		{
			sort (max+1 , max+4) ;  
			max[3] = max[3] / 2; 
		}

		sort (max+1 , max+4) ;  
		printf ("%lld\n",max[3])  ; 
	}
return 0 ; 
}