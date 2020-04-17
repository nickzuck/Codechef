#include<iostream>
#include<algorithm>

#define MAX  100002
using namespace std ;

int main()
{
    long long int arr[MAX] , i , j , n ,temp, ans[MAX]; 
    long long int t ; 
    cin >> t ; 
  
    while(t--){
        cin >> n ;
        for (i = 0 ;i < n ;i++){
            cin >> temp ;
            if (temp <0)
                arr[i] = -1 ;
            else
                arr[i] = 1;
        }

	/* Changed the position of below one line*/
       ans[n-1] = 1 ; 
       for(i = n-2 ;i>= 0 ;i--){
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
