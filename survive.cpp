#include<bits/stdc++.h>

using namespace std ;

int main(){
	
	int t, n, k, s ;
	cin >> t ;
	while(t--){
		cin >> n >> k >> s;
        int buy = 0, rem = 0, day = 1 ;
        bool flag = true , bought = false;
        for(int i = 0 ; i < s ; i++){
            if(rem < k and day != 7){
                buy ++ ;
                rem += n ;
                bought = true ;
            }
            if (day == 6 and i != s-1 and rem < 2*k and bought == false){
                buy ++ ;
                rem += n ;
                bought = true ;
            }
            if(day == 5 and i!= s-2 and rem < 3*k and bought == false){
                buy ++ ;
                rem += n ;
                bought = true ;
            }
            if(day == 4 and i!= s-3 and rem < 4*k and bought == false){
                buy ++ ;
                rem += n ;
                bought = true ;
            }
            if(day == 3 and i!= s-4 and rem < 5*k and bought == false){
                buy ++ ;
                rem += n ;
                bought = true ;
            }
            if(day == 2 and i!= s-5 and rem < 6*k and bought == false){
                buy ++ ;
                rem += n ;
                bought = true ;
            }
            if(day == 1 and i!= s-6 and rem < 7*k and bought == false){
                buy ++ ;
                rem += n ;
                bought = true ;
            }

            // deduct chocolates for current day
            //cout << rem << "  " << day << " " << bought << endl ;
            if(rem < k){
                flag = false ;
                break ;
            }
            rem -= k ;
            bought = false ;
            if(day == 7){
                day = 1 ;
            }
            else{
                day ++ ;
            }
        }
        if(flag){
            cout << buy << endl ;
        }
        else{
            cout << -1 << endl ;
        }
	}

	return 0 ;
}
