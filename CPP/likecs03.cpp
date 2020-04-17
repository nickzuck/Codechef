#include<bits/stdc++.h>

using namespace std ;

#define pb push_back

int main(){
    
    int t, n, k ;
    cin >> t ;
    while(t--){
        cin >> n >> k ;

        vector<int> v ;
        int temp ; 
        for(int i = 0 ;i < n ; i++){
            cin >> temp ;
            if(temp && (!(temp & (temp-1))) ){
                v.pb(temp);
            }
        }

        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());
        cout << k- v.size() << endl ;
    }

    return 0 ;
}
