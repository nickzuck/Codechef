#include<bits/stdc++.h>

#define pb push_back
  
using namespace std ;

int main(){

    int t, n, a, b, c ;
    cin >> t ;
    while(t--){
        cin >> n >> a >> b >> c;
        
        // Find all divisors of a natural number
        vector<int> divisors ;
        for (int i =1 ; i < sqrt(n)+1 ; i++){
            if(n%i==0){
                if(n/i == i){
                    divisors.pb(i);
                }
                else{
                    divisors.pb(i);
                    divisors.pb(n/i);
                }
            }
        }

        // sort al the divisors
        sort(divisors.begin(), divisors.end());

        // Try to print all the tuples
        int first , second , third , temp, count = 0 ;
        for(int i = 0 ; i != divisors.size() ; i++){
            first = divisors[i] ; 
            if(first <= a){
                temp = n/first ;
                //cout << "temp " << temp << endl ;
                for(int j = 0 ; j != divisors.size() ; j++){
                        //cout << "j = " << divisors[j] << endl ;
                    //if (j != i){
                        if(temp % divisors[j] == 0 and divisors[j] <= b and temp/divisors[j] <= c){
                            //cout << divisors[i] << " "<< divisors[j] << " " << temp/divisors[j] << endl  ;
                            count ++ ;
                        }
                    //}
                }
            }
            else{
                break ;
            }
        }
        cout << count << endl;
    }

    return 0 ;
}

