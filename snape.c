#include<stdio.h>
#include<math.h>
 
int main ()
{
	int a , b ,t ;
	double min , max ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%d%d",&a , &b)  ; 
		min = sqrt (b*b - a*a)  ; 
		max = sqrt (b*b + a*a)  ; 
		
		printf ("%lf %lf\n",min , max)  ; 	
	}
 
return 0 ; 
}