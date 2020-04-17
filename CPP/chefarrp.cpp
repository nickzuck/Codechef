#include<iostream>
#include<algorithm>

#define MAX 52

using namespace std ;

int main()
{
	long int t , n , arr[MAX] , i , j; 
	cin >> t; 
	while(t--){
		cin >> n ;
		for(i = 0 ; i<n ;i++){
			cin >> arr[i] ;
		}
		
		int count = 0 ;
		for(int window = 1 ;window <=n ; window++){
			for(i = 0 ;i+window-1 < n ; i++){
				int sum =  0 ;
				int mult = 1 ;
				for(j = i ; j <= i+ window-1 ;  j++){
					sum += arr[j];
					mult *= arr[j];
				}
				//cout << sum << "  " << mult <<endl ;
				if (sum == mult)
					count ++ ;
			}
		}
		cout << count << endl ;
	}
return 0 ;
}