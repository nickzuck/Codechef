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
        long long int others  = m-ones ; 
        // there is not even a single chain
        if (n == m){ 
            cout << n / 2 << endl ; 
        }

        else
        {
            if (ones > others){
                long long int s1 =  others-1 ; 
                long long int s2 =  ones - s1 ; 
                if (s2 % 2 == 0){
                    s2 = s2/2 ; 
                }
                else {
                    s2 = s2/2+1 ; 
                }
            cout << s1+s2 << endl ; 
            }

            else {
                cout << m-1-ones << endl ; 
            }
        }
        
    }    
return 0 ;
}
