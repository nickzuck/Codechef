#include<iostream>
#include<cmath>
#include<algorithm>

#define MAX 2000000002
//#define MAX 10003

using namespace std ; 

int main ()
{
    int t , i , j ; 
    long long int n , m ;
    cin >> t ; 
    while (t--){
        cin >> n >> m ; 
        long long int arr[m+1];  
        for (i = 0 ; i<m ; i++){
            cin >> arr[i] ; 
        } 

        sort(arr , arr + m ) ; 
        
        i =  0  ; 
        j = m-1 ;
        
        long long int count = 0 ; 
        long long int temp = arr[j] ; 
        j-- ; 
        while (1) {
            

            //we break the smallest chain of donut 
            // if the smallest chain have only one donut we reduce one chain automatically
            if (arr[i] == 1 ){
                i++ ;  
	    }
	    else {
		arr[i] -- ; // we forget to remove the donut when we used this donut chain to join
	    }
            count ++ ; 
	    if (i < j){
                temp += arr[j] + 1 ;  // we are connecting the current donut chain to the next largest chain
                j-- ; 
	    }
	    else{
		temp += arr[j] ;
	    }
	

	    //cout << temp << endl ;
            if (temp == n)
                break ;
        } 
        cout << count << endl ;
    }    
return 0 ;
}
