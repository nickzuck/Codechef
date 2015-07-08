#include<stdio.h>

int max (int * , int *, int ) ;

int main()
{
	int game[10000][2] ,rounds ,i ,sum[2]= {0,0} , max_diff, winner;
	scanf("%d",&rounds) ;
	
	for (i=1 ; i <= rounds ;i++)
	{
		scanf ("%d%d",&game[i][1],&game[i][2]);
		sum[1] = sum[1] + game[i][1];
		sum[2] = sum [2] + game[i][2] ;
		
	}
	
	 
	if (sum[1] > sum[2])
	{
		max_diff  = max (&game[1][1] , &game[1][2],rounds);
		winner = 1;
		printf("%d %d",winner,max_diff) ;
	}		
	
	else 
	{
		max_diff = max (&game[1][2] , &game[1][1], rounds);
		winner = 2 ; 
		printf ("%d %d",winner,max_diff) ;
	}
return 0 ; 
}

int max (int *a , int *b , int t )
{
	int temp = 0, diff , inc=1;
	while ( inc <= t)
	{
		diff = *a - *b ;	
		if (diff  > temp)
		{
			temp = diff ; 
		}
		inc ++ ;
		 a++ ; 
		 b++ ;
	} 
return diff ; 
}