#include<iostream>

#define MAX 100002
using namespace std ; 

int main()
{
    long long int t, n , q, arr[MAX], i , mx, mi ; 
    cin >> n >> q ; 
    cin >> arr[0]; 
    mx = arr[0] ; // stores the maximum in an array
    mi = arr[0]; // stores the minimum in an array
    for(i = 1 ; i< n ; i++){
        cin >> arr[i] ; 
        if(mx < arr[i])
            mx = arr[i]; 
        if(mi > arr[i])
            mi = arr[i];
    }
    while(q--){
        cin >> t ; 
        if(t<= mx && t >= mi){
            cout << "Yes\n";
        }
        else{
            cout << "No\n" ;
        }
    }
return 0 ;
}
