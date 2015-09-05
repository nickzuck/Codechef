#include<iostream>
#include<cmath>
#include<algorithm>

using namespace std ; 

class lighthouse 
{
  private :
    long long int x ; 
    long long int y ; 
  public:
    lighthouse() {
        x = 0 ; 
        y = 0 ; 
    }
    inline long long int getx () {
        return x ; 
    }
    inline long long int gety () {
        return y ; 
    }
    inline void setx (long long int temp) {
        x = temp ; 
    }   
    inline void sety (long long int temp) {
        y = temp ; 
    }
};

int main ()
{

    long long int t , n, i , j , tempx , tempy ;
    cin >> t ;
    while (t--){
        cin >> n ; 
        lighthouse island[n+1] ,quad[5]; 

        long long int number[5] = {0} ; //stores the island number corresponding to the input of the quad object
        for (i = 1 ; i<=n ; i++){
            cin >> tempx ; 
            cin >> tempy ; 
            island[i].setx(tempx) ;
            island[i].sety(tempy) ; 


            if (tempx > 0 ){
                if (tempy > 0){
                    //QUADRANT - 1 (++)
                    if (quad[1].getx() <= tempx && quad[1].gety() <= tempy){
                        quad[1].setx(tempx) ; 
                        quad[1].sety(tempy) ; 
                        number[1] = i ; 
                    }
                }
                else{
                    //QUADRANT -4 or +ve x-axis (x-)
                    if (quad[4].getx() <= tempx && quad[4].gety() >= tempy ){
                        quad[4].setx(tempx) ; 
                        quad[4].sety(tempy) ; //setting the min value of y
                        number[4] = i ;        
                    }
                }
            }


            else {
                if (tempy > 0){
                    //QUADRANT - 2 (-+)
                    if (quad[2].getx() >= tempx && quad[2].gety() <= tempy){
                        quad[2].setx(tempx) ;//setting the min value of x 
                        quad[2].sety(tempy) ; 
                        number[2] = i ; 
                    }
                }   
                else {
                    //QUADRANT-3 or -ve x-axis(--)
                    if (quad[3].getx() >= tempx && quad[3].gety() >= tempy){
                        quad[3].setx(tempx) ; //set the min x as the value
                        quad[3].sety(tempy) ; //set the min y as the value 
                        number[3] = i ; 
                    }
                }
            }

        }//FOR LOOP over(input over)

        int count = 0 ; 
        for (j =1 ; j<=4 ; j++){
            if (number[i] != 0){
                count ++ ;
            }
        } 
        cout << count << endl ; 
        if (number[1] != 0)
            cout << number[1] << " SW" << endl ; 
        if (number[2] != 0 )
            cout << number[2] << " SE" << endl ; 
        if (number[3] != 0 )
            cout << number[3] << " NE" << endl ; 
        if (number[4] != 0) 
            cout << number[4] << " NW" << endl ;
       
    }
 
return 0;  
}
