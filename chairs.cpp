#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t,  n;
    cin >> t; 
    while(t--){
        cin >> n ; 
        char str[n+1];
        int c0 = 0;
        for(int i = 0 ; i < n ; i++){
            cin >> str[i] ;
            c0 += str[i] == '0' ? 1 : 0;
        }
        int maxLen = 0 , len = 0;
        for(int i = 0 ; i < n; i++){
            if(str[i] == '0'  and str[(i+n-1)%n] == '1'){
                len = 1;
                while(str[(i+1)%n] == '0'){
                    len ++ ;
                    i ++ ;
                }
                maxLen = max(maxLen, len);
            }
        }

        cout << c0 - maxLen << endl ;
    }
return 0 ;
}
