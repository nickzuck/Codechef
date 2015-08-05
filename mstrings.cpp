/* I think every string which follows the property of MSTRINGS must be a palindrome...So let's try this out*/
#include<iostream>
#include<cstring>
#include<cmath>

using namespace std ;

int main ()
{
	int t , i , j; 
	char s[102] ; 
	cin >> t; 
	while (t--){
		cin >> s ; 
		int flag =1 ; // assuming true
		for (i = 0 , j = strlen(s)-1 ; i<=(strlen(s)/2) ; i++, j--){
			//cout << s[i] << "  " << s[j] << endl ;
 			if (s[i] != s[j])
				flag = 0 ; 
		}
		if (flag ==1 )
			cout << "YES\n" ; 
		else 
			cout << "NO\n" ;
	}
return 0 ;
} 
