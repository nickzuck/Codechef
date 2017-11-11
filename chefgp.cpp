#include<bits/stdc++.h>

using namespace std ;

int main(){
    
    int t, n ;
    cin >> t ;
    while(t--){
        string s ;
        int x, y ;

        cin >> s ;
        cin >> x >> y ;
        // cout << s << x << y ;
        // Total count of a and b
        int countA = 0, countB = 0 ;
        n = s.length();
        for(int i = 0 ;i < n ; i++){
            (s[i] == 'a' ? countA : countB)++ ;
        } 
        // cout << "Out of first loop";
        
        int lastX = 0 , lastY = 0 ;
        for(int i = 0 ;i < n ; i++){
            if(countA >= countB){
                if(lastX < x){
                    cout << "a" ;
                    countA  -= 1;
                    lastX ++ ;
                    lastY = 0 ;
                }
                else{
                    if(countB){
                        cout << "b" ;
                        countB -= 1 ;
                        lastY += 1 ; 
                        lastX = 0 ;
                    }
                    else{
                        cout << "*a" ;
                        countA -= 1; 
                        lastX  = 1;
                        lastY = 0 ;
                    }
                }
            }

            else{
                if(lastY < y ){
                    cout << "b" ; 
                    countB -= 1 ;
                    lastY += 1 ;
                    lastX = 0 ;
                }
                else{
                    if(countA ){
                        cout << "a" ; 
                        countA -= 1;
                        lastX += 1 ;
                        lastY = 0 ;
                    }
                    else{
                        cout << "*b"  ;
                        countB -= 1 ;
                        lastX = 0 ;
                        lastY = 1 ;
                    }
                }
            }
        }
        cout << endl ;
    }

    return 0 ;
}
