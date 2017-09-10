#include<bits/stdc++.h>

using namespace std ;

void pa(int arr[], int n){
    for(int i = 0; i <n ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;
}

int main()
{
    int t, n ;
    cin >> t ;
    while(t--){
        cin >> n ;
        int arr[n+1] ;
        for(int i = 0 ;i < n ; i++){
           arr[i] = i+1;
        }
        
        int actualN = n ;
        int t[4] ;
        if(n%2 !=0){
            t[0] = arr[n-3]; t[1] = arr[n-2] ; t[2]  = arr[n-1];
            arr[n-3] = t[1] ; arr[n-2]  = t[2] ; arr[n-1]  = t[0];

            n -= 3 ;
        }
        for(int i = 1 ;i < n; i+=2){
            swap(arr[i], arr[i-1]);
        }
        pa(arr, actualN);
    }
return 0;
}
