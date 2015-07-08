#include<stdio.h>

int main ()
{
	int p1 , p2 , lead , leader , s1 , s2, rounds ,i ,maxlead=0 , maxleader =0;
	scanf("%d" , &rounds) ;
	s1 = s2 = 0 ;
	while (rounds--)
	{
		scanf ("%d%d",&p1,&p2) ;
		s1 = s1 + p1 ; 
		s2 = s2 +p2; 
		if (s1 >  s2 ) 
		{
			lead =  s1- s2; 
			leader = 1 ; 
			
		}
		else
		{
			lead = s2 - s1 ;
			leader =2 ;
		}
	
	maxlead = maxlead>lead?maxlead:lead;
		if(maxlead == lead)
			maxleader = leader;
	
	}
	
		
	printf ("%d %d\n",maxleader , maxlead) ;
return 0 ;
}