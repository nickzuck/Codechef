#include<bits/stdc++.h>

using namespace std ;

int main()
{
    int t, n, m ; 
    cin >> t; 
    while(t--){
        cin >> n >> m ;
        int u, v ;
        for(int i = 0 ;i < m ; i++){
            cin >> u >> v ;
        }
        if(n%2 ==0){
            cout << "yes\n" ;
        }
        else{
            cout << "no\n";
        }
    }
return 0 ;
}
