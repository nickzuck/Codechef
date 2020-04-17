#include<iostream>
#define MAX 100002

using namespace std ; 

int main()
{
    long long int t, n , arr[MAX], i , flag; 
    cin >> t ; 
    while(t--){
        cin >> n ; 
        for(i = 0 ; i< n ; i++){
            cin >> arr[i] ;
        }
    
        flag= 0 ;
        for(i =0 ; i<n-2 ; i++){
           // cout << "Index = " << i << endl ;  
            if(arr[i] == arr[i+1] && arr[i+1] == arr[i+2]){
                flag = 1 ; 
                break ; 
            }
        }

        if(flag ==1)
            cout << "Yes" << endl ;
        else
            cout << "No\n";
    }
return 0 ; 
}
