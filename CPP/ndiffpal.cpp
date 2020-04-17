#include<iostream>
#include<stdlib.h>
#include<cstring>

using namespace std ;

#define MAX 10002

int main()
{
    int t, i , n, a_index , j;
    char arr[MAX], c; 
    cin >> t ; 
    while(t--){
        cin >> n ; 
        i = 97;
        a_index = 0 ;
        while(n--){
            c = i ;
            i++ ;
            arr[a_index++] = c;
            if(i==123){
                i = 97;
            }
        }
        
        for(j = 0 ; j< a_index ; j++){
            cout << arr[j];
        }
        cout << endl ;

    }
return 0 ; 
}
