#include<iostream>
#include<string.h>
#include<algorithm>
#include<cmath>

using namespace std ; 

int main ()
{
	int arr[1000] , i , j , count; 
	char s[1001] ; 
	cin >>s ; 
	int len = strlen(s) ; 
	//cout << "length = " << len << endl ;
	j = 0 , count = 0 ; 
	for (i= 0 ; i<len ; i++){
		if (s[i] == '1'){
			count ++ ; 
		}
		else if (s[i] == ','){
			arr[j] = count ; 
			cout << "j = " << j << "\t arr[j] = " << arr[j] << endl ; 
			j ++ ; 
			count = 0 ; 
		}
	//	cout << i << endl ;
	}
	arr[j] = count ; 
	cout << "j = " << j << "\t arr[j] = " << arr[j] << endl ; 
	j ++ ; 
	count = 0 ; 
	sort(arr, arr+j) ; 
	long int ans = pow(arr[0],2);
	for (i= 1 ; i<j;i++){
		ans+= pow(arr[i] - arr[i-1],2) ;	
		cout << "ans = " << ans << endl ;
	}
	cout << ans << endl;
return 0 ; 
}