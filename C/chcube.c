#include<stdio.h>
#include<string.h>

int main ()
{
	int t , arr[8] , i  , j  , flag  ; 
	char str[20] ; 
	scanf ("%d",&t ); 
	while (t--) 
	{
		for (i=0 ; i<6 ; i++){
			arr[i] = 0 ; 
		}
		flag = 0 ; 
		for (i=0 ; i<6 ; i++){
			scanf ("%s",str);
			if (str == "black")
				arr[0] ++ ; 
			else if (str == "blue") 
				arr[1] ++ ; 
			else  if (str == "red")
				arr[2] ++ ; 
			else if (str == "green") 
				arr[3] ++ ; 
			else  if (str == "yellow")
				arr[4] ++ ; 
			else if (str == "orange")
				arr[5] ++ ; 
		}

		for(i = 0 ; i<6 ; i++){
			if (arr[i] >=3)
				flag = 1; 
		}
		if (flag == 1 )
			printf ("YES\n") ; 
		else 
			printf ("NO\n"); 
	}
return 0 ; 

}
