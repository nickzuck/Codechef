#include<bits/stdc++.h>

using namespace std ;

void getOutput(int ca, int cb, int x, int y, char a, char b){
    while(cb > 0){
       cout << string(min(ca,x), a) << b ;
       cb -- ;
       ca -= min(ca, x) ;
    }
   // cout << "Out of while loop"<< endl ;
    while(ca > 0){
       // cout << "This loop " << ca << "\t" << cb << endl;
        if(ca >x)
            cout << string(x,a) << '*' ;
        else
            cout << string(min(x, ca), a) ;
        ca -= min(ca,x);
    }
    cout << endl ;
}

int main(){
    
    int t, x, y;
    cin >> t ;
    while(t--){
        string s ;
        cin >> s ;
        cin >> x >> y ;

        int ca = 0 , cb = 0  ;
        for(int i =0 ; i < s.length(); i++){
            if(s[i] == 'a')
                ca += 1 ;
            else if(s[i] == 'b')
                cb += 1 ; 
        }

        if (ca >= cb){
            getOutput(ca, cb, x, y, 'a', 'b');
        }
        else{
            
        }
            
    }

    return 0 ;
}
