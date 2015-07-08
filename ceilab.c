#include<stdio.h>


int main ()
{
	int a, b , ans; 
	scanf ("%d%d",&b , &a) ;
	ans = b- a  ; 
	if (ans % 10 == 9)
	printf ("%d",ans-1) ;
	else 
	printf ("%d",ans +1);

return 0 ;
}