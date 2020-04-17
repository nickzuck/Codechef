#include<bits/stdc++.h>

#define pb push_back
#define mp make_pair

using namespace std ;

int main()
{
    int t,  n;
    cin >> t; 
    while(t--){
        cin >> n ; 

        // Prepare data
        vector<pair<int, int > > seq ;
        pair<int, int> temp ;
        for(int i = 1 ; i <=n ;i++){
            if(i == n){
                seq.pb(mp(i,1)) ;
                continue ;
            }
            seq.pb(mp(i, i+1)) ;
        }
        int rounds = n ;

        cout << rounds << endl ;
        for(int r = 1 ;r <=rounds ; r++){
            cout << n  << endl ;
            for(int i = 1; i<=n ; i++){
                temp = seq[(r+i-2)%n];
                cout << i << " " << temp.first << " "<<temp.second << endl ;
            }
        }
       
    }
return 0 ;
}
