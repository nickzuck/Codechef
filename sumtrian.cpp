#include<iostream>
#include<algorithm>

using namespace std ;

int main ()
{
	int n , t , i , j ; 
	cin >> n; 
	while (n--){
		int arr[1002][1002] = {0} ;
		cin >>t ;

		for(i= 0 ; i<t ; i++){
			for (j=0 ; j<=i ; j++){
				cin >> arr[i][j] ; 
			}
		}

		for(i=t-2 ; i>=0 ; i--){
			for (j= t-2 ; j>=0 ; j--){
				arr[i][j]= max (arr[i][j]+ arr[i+1][j] , arr[i][j]+arr[i+1][j+1] ) ;
			}

		}

		cout << arr[0][0] << endl ;
	}
	
return 0 ; 
}