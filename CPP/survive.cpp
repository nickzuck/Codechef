#include<bits/stdc++.h>

using namespace std ;

int main(){
	
	int t, n, k, s ;
	cin >> t ;
	while(t--){
		cin >> n >> k >> s;
        int buy = 0, rem = 0, day = 1, no_buy_day = 0 ;
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

            // deduct chocolates for current day
            //cout << rem << "  " << day << " " << bought << endl ;
            if(rem < k ){
                if(no_buy_day <= 0){
                    flag = false ;
                    break ;
                }
                else{
                    bought = true ;
                    no_buy_day -= 1;
                    buy ++ ;
                    rem += n ;
                }
            }
            rem -= k ;
            if(bought = false and day != 7){
                no_buy_day += 1 ;
            }
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
