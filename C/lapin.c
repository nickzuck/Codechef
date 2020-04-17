#include<stdio.h>
#include<string.h>

int main ()
{
	int i , j , a[59] , b[59]  , len ,t , m , flag ; 
	char s[1002]  ; 
	scanf ("%d",&t)  ; 
	while (t--)
	{
		scanf ("%s",s)  ; 
		
		for (i= 0 ; i<=27 ; i++)
			a[i] = 0 ; 

		for (i= 0 ; i<=27 ; i++)
			b[i] = 0 ;

		len = strlen(s) ;  

		for (j=0 ; j<len/2; j++)
		{
			a[s[j]-'a']++;
		//	printf ("%d\n" ,a[s[j]-'a']); 
		}

				
		if (len&1)
			j++ ; 
		while (j<len)
		{
			b[s[j]-'a'] ++ ; 
			j++;
		}
		
		
		 /*for (k=0  ; k<=26 ; k++)
			printf ("%d\n",a[k]) ; */ 

		
		flag = 1 ; 
		for (m = 0 ; m<=26  ; m++)
		{
			if (a[m] !=  b[m]) 
				flag = 0 ; 
		}
			
		if (flag)
			printf ("YES\n")  ; 
		else 
			printf ("NO\n") ; 
	}

return 0 ; 
}
