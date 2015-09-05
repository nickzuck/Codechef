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
    
        long long int ones = 0 ;
        cin >> n >> m ; 
        long long int arr[m+1];  
        for (i = 0 ; i<m ; i++){
            cin >> arr[i] ; 
            if (arr[i] == 1 ){
                ones++ ; 
            }
        } 
        
        // there is not even a single chain
        if (n == m){ 
            cout << n / 2 << endl ; 
        }

        //all the donuts are in smaller chains
        else if (ones == 0) {
            cout << m-1 << endl ; 
        }

        // some donuts are in chain a some are independent 
        else {
            
           long long int non_ones = m - ones; 
           if (ones == non_ones-1){
                cout << ones << endl ;  // only the single donuts are needed to be broken
            } 

            else {
                long long int s1 = non_ones -1 ; 
                long long int s2 = ones/2 ; 
                cout << s1 + s2 << endl ; 
            }
        }

        
    }    
return 0 ;
}
