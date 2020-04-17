#include<cstdio>
#include<cmath>

int main ()
{
	long long int t , a  , b , flag , swag  , i , ans  ; 
	scanf ("%lld",&t) ; 	
	while (t--)
	{
		scanf ("%lld %lld",&a ,&b) ; 

/*DOING THE THINGS FOR LENGTH */
		flag = 0 ; 
		for (i = 2 ; i <= sqrt(a)  ; i++)
		{
			if (a % i == 0 )
			{
				flag = 1 ; 
				break ;  
				
			}
		}
		if (a ==2 || a == 1 || a== 3)
			a = 1  ; 
		else if (flag == 0)
			a-- ; 			
	
/* DOING THE THINGS FOR BREADTH */
		flag = 0 ; 
		for (i = 2 ; i <= sqrt(b)  ; i++)
		{
			if (b % i == 0 )
			{
				flag = 1 ; 
				break ;
				
			}
		}
		if (b ==2 || b == 1 || b== 3)
			b = 1  ; 
		else if (flag == 0)
			b-- ; 
		

		ans = a *b ; 
		printf ("%lld\n",ans) ; 

		
			
	
	}
}