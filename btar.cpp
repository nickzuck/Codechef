#include<bits/stdc++.h>

using namespace std ;

int main(){
    
    int t, n,temp ;
    cin >> t ;
    while(t--){
        map<int, int> mp ;
        mp[1] = 0 ; mp[2] = 0 , mp[3] = 0;
        cin >> n ;
        long long count = 0, sum = 0 ;
        for(int i = 0 ;i <n ; i++){
            cin >> temp;
            // sum += temp ;
            if (temp %4 != 0 ){
                mp[temp%4]++;
            }
        }

        if (mp[1] == mp[3] and mp[2]%2 == 0){
            int ans = mp[1] + mp[2]/2;
            cout << ans << endl ;
        } else {
            cout << -1 << endl ;
        }
    }
    return 0 ;
}
