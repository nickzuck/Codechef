#include<stdio.h>
#include<string.h>
#include<math.h>

/* we will conver the number b into integer by finding the modulo of 'b' from the number 'a' ..then we will apply the same formula as given in the problem */

// function definitions 
int mod (char [] , int )  ;  
int gcd (int  , int  )  ; 

int main ()
{
	int  a , t  ; 
	char b[253] ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%d",&a) ; 
		scanf ("%s",b) ;  /* taking the input 'b' in a string */
		if (a == 0) 				// for a= 0 the gcd will be 'b' itself 
		{
			printf ("%s\n",b)  ; 
		}
		else 
			printf ("%d\n",gcd(a,mod(b,a)))  ; 
			
		
	}

return 0 ; 
}

int mod (char b[]  , int a)  
{
	int fb = 0 , len , i ;
	len = strlen (b)  ; 
	for (i= 0 ; i<len ; i++)
	{
		fb = fb *10 + (b[i] -48) ;  // OOPS ! did a blunder over here in previous solutions  
		fb = fb %a ; 
	} 
	
return fb ; 
}

int gcd (int a , int b )  
{
	if (b == 0 )
		return a ; 
	else 
		return gcd (b , a%b)  ; 
}