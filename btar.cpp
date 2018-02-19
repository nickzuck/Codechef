#include<bits/stdc++.h>

using namespace std ;

int main(){
    
    int t, n,temp ;
    cin >> t ;
    while(t--){
        cin >> n ;
        long long count = 0, sum = 0 ;
        for(int i = 0 ;i <n ; i++){
            cin >> temp;
            sum += temp ;
            if (temp %4 != 0 ){
                count += 1 ;
            } 
        }
        if(sum %4 !=0){
            cout << -1 << endl ;
        }
        else{
            cout << count /2 << endl ;
        }
    }

    return 0 ;
}
