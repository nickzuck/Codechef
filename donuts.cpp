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
        while (i < j) {
            //condition to break out of the loop to be corrected or added

            if (arr[i] == 1)
                count ++ ; //tab hoga jab a[i]  = 1 hoga 
            else 
                count += 2 ; 
            arr[j-1] = arr[j] + arr[j-1] + arr[i] ; 
            i++ ; 
            j-- ; 
            if (arr[j] == n || arr[i] == n )
                break ;
        } 
        cout << count << endl ;
    }    
return 0 ;
}
