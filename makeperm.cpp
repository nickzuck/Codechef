#include<iostream>

#define MAX 100001

using namespace std ;

int main(){
    int t, n, temp ;
    cin >> t;
    while(t--){
        int arr[MAX] = {0} ; 
        cin >> n ;
        int ans = n ; 
        for(int i = 0 ; i < n ; i++){
            cin >> temp ;
            // If the number is greater than n, then it is definitely
            // going to change
            if(temp <= n ){
                if(arr[temp] == 0){
                    arr[temp] = 1 ;
                    ans -= 1 ;
                }
            }
        }
        cout << ans << endl ;
    }
return 0 ;
}
