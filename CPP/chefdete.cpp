#include<iostream>
#include<cstring>

#define MAX 100002
using namespace std ;

int main()
{
    int arr[MAX] , i , n , temp;
    cin >> n;
    memset(arr, 0, sizeof(arr));
    for(i = 0 ; i< n ; i++){
       cin >> temp ; 
       arr[temp] ++ ; 
    }

    for(i =  0 ; i <= n ; i++ ){
        if(arr[i] == 0){
            cout << i<< " " ;
        }
    }


return 0 ;
}
