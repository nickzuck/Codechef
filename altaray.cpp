#include<iostream>
#include<algorithm>

#define MAX  100002
using namespace std ;

int main()
{
    int arr[MAX] , i , j , n ,temp, ans[MAX]; 
    int t ; 
    cin >> t ; 
    ans[n] = 1 ;
    while(t--){
        cin >> n ;
        for (i = 0 ;i < n ;i++){
            cin >> temp ;
            if (temp <0)
                arr[i] = -1 ;
            else
                arr[i] = 1;
        }


       for(i = n-1 ;i>= 1 ;i--){
        if(arr[i]*arr[i+1] < 0){
            ans[i] = ans[i+1] + 1;
        }
        else
            ans[i] = 1;
       }

    for(i= 0 ;i < n ;i++)
        cout << ans[i] << " " ;
    cout << endl ;
    }

    return 0;
}
