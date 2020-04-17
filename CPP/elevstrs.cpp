#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t ; 
    float v1, v2, n ;
    cin >>t  ;
    while(t--){
        cin >> n >> v1 >> v2 ;
        float te = (2*n)/v2;
        float ts = sqrt(2)*n/v1;
        if(ts > te){
            cout << "Elevator" << endl ;
        }
        else{
            cout << "Stairs" << endl ;
        }
    }
return 0;
}
