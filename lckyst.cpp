#include<iostream>
#include<cmath>

using namespace std ; 

long long int four (long long int ) ; 

int main ()
{
	long long int n , a , i ,temp , zeros , flag ; 
	cin >> n ; 
	for (i = 0 ; i<n ; i++)	
	{
		cin >>  a;
		temp = a ;  
		zeros = 0 ;
		flag = 1 ;  
		while (flag == 1){
			if (temp %5 ==0){
				zeros ++ ; 
				temp /= 5 ; 
			}
			else 
				flag = 0 ; 
		}
		temp = a ; 
		long long int twos = 0 ; 
		flag = 1 ;  
		while (flag == 1){
			if (temp %2 ==0){
				twos ++ ; 
				temp /= 2 ; 
			}
			else 
				flag = 0 ; 
		}
		//cout << "Zeros = "<< zeros << endl; 
		if (zeros > twos )
				zeros = zeros - twos ;
			else
				zeros  = 0 ; 
		if (zeros == 0 )
			cout << a << endl ; 
		else {
			temp = four (zeros) ; 
			cout << a * pow (4,temp)<<endl ; 
		}
		
	}
return 0 ; 
}

long long int four (long long int zeros )
{
	if (zeros % 2 == 0 )
		return  zeros /2 ; 
	else 
		return (zeros+1)/2 ; 
}