#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n ; 
    float s, sg, fg, d, t ;
    float distance , dim, tdim, dfather, dsebi; 
    cin >> n; 
    while(n--){
        cin >> s >> sg >> fg >> d >> t ;
        distance = d*50;  //in metres
        //conversion to km
        dim = ((distance*18)/(t*5));
        tdim  = s + dim ;
        dfather = abs(tdim - fg);
        dsebi = abs(tdim - sg);
        if(dsebi < dfather){
            cout << "SEBI\n";
        }
        else if(dfather < dsebi){
            cout << "FATHER\n";
        }
        else
            cout << "DRAW\n";
    }
 return 0 ;   
}
