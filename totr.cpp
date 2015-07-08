#include<cstdio>
#include<cctype>
#include<cstring>

using namespace std ; 

int main ()
{
	char s[102] , map [27]   ; 
	int i , t  , len ; 	
	scanf ("%d",&t ); 
	scanf ("%s",map) ; 
	while (t--)
	{
		scanf ("%s",s) ; 
		len = strlen (s)  ; 
		for (i = 0 ; i<len ; i++)
		{
			if (islower (s[i]))
				s[i]  = map [s[i] - 'a'] ; 
			else if (isupper(s[i]))	
				s[i]  = toupper (map [s[i]-'A']) ; 
			else if (s[i] == '_')
				s[i]  = ' ' ; 
		}

		printf ("%s\n",s) ; 
	}
return 0  ;
}