#include<bits/stdc++.h>

using namespace std ;

int main(){
    int t ; 
    cin >> t ;
    while (t--){
        int n , score;
        cin >> n;
        
        string s ;
        cin >> s ;
        // cout << "n : " << n << endl ;
        // cout << "s  : " << s << endl ;
        // vector<int> scores;
        // scores.reserve(s.size());
        // transform(begin(s), end(s), back_interator())

        int points_a= 0, points_b = 0 , rem_a = n, rem_b = n;
        bool found = false ;
        for(int i =0 ; i < s.length(); i++){
            score =  s[i] - '0';
            // cout << "score found : " << s[i] << endl ;
            if(i %2 == 0){
                points_a += score ;
                rem_a -- ;
                // cout <<"a waale mein \n";
                // cout << rem_b << " " << points_b << " " << points_a <<endl; 
                if(rem_b + points_b < points_a || rem_a + points_a < points_b ){
                    cout << i + 1<< endl;
                    found = true ;
                    break;
                }
            } else {
                points_b += score ;
                rem_b -- ;
                // cout << "b waale mein\n";
                // cout << rem_a << " " << points_a << " " << points_b <<endl;
                if(rem_a + points_a < points_b || rem_b + points_b < points_a) {
                    cout << i + 1<< endl ;
                    found = true ;
                    break;
                } 
            }
        }
        if (!found) {
            cout << 2*n << endl ;
        }
    }
    return 0;
}