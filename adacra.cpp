#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t,  n;
    cin >> t; 
    char str[53];
    while(t--){
        cin >> str ; 
        int flips = 0 ;
        int uflips = 0 ;
        //int state = str[0] == 'U' ? 1: 0 ; 
        char prev = str[0] ;
        n = strlen(str) ;
        if(prev == 'U')
            uflips ++ ;
        else
            flips ++ ;
        for(int i = 1 ;i < n ; i++){
            if(prev == 'U'){
                if(str[i] == 'D'){
                    flips ++ ;
                    prev = str[i] ;
                }
            }
            else{
                if(str[i] == 'U'){
                    uflips ++ ;
                    prev = str[i] ;
                }
            }
        }
        cout << min(flips, uflips) << endl ;
    }
return 0 ;
}
