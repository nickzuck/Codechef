#include<bits/stdc++.h>

#define MAX 200002

using namespace std ;


int main(){
    
    int t, n, k , temp;
    cin >> t ;
    while(t--){
        cin >> n >> k ; 

        int arr[MAX] = {0}; 
        for(int i =0 ;i < n ; i++){
            cin >> temp ; 
            arr[temp] = 1 ;
        }

        int i ;
        for(i = 0 ; ; i++ ) {
            if(k == 0 and arr[i] == 0){
                break;
            }

            if(arr[i] == 0){
                k -- ;
            }
        }
        cout << i << endl ;

   } 
        
    return 0 ;
}
