#include<iostream>
#include<cmath>

using namespace std ; 

void swap(long long int &n1 , long long int &n2){
    long long int temp = n1 ; 
    n1 = n2 ; 
    n2 = temp ; 
}

long long int searchForC(long long int x, long long int C)
{
    cout <<"In function searchForC\n" ;
    long long int m , temp, diff, i ; 
    m = x ; 
    diff = x ;
    temp = C*m ; 
    cout << "Outside while diff =  " << diff << "m = " << m << endl ; 
    cout << "Temp = " << temp  << endl ;
    while(temp > x ){
        cout << "diff =  " << diff << "m = " << m << endl ; 
        diff = abs(x - temp) ;
        m /=2 ; 
        temp = C*m ;
    }
    //if (x != m){
    for(i = m+1 ; i < m*2 ; i++ ){
        cout << "diff =  " << diff << "i = " << i << endl ; 
        temp = abs(C*i - x) ;
        if(temp < diff){
            diff = temp ;
        }
        else
            break ; 
    }
    //}
    return min(x, diff) ;
}

long long int searchForD(long long int x, long long int D){
    long long int diff, temp , m , i;
    m  = x; 
    diff = x ; 
    temp = D*m ;
    cout << "Outside while diff =  " << diff << "m = " << m << endl ; 
    while(temp > x){
        cout << "diff =  " << diff << "m = " << m << endl ; 
        diff = abs(x- temp);
        m /=2 ; 
        temp = D*m  ;
    }

    for(i = m+1 ; i < m*2 ; i++){
        cout << "diff =  " << diff << "i = " << i << endl ; 
        temp = abs(D*i -x) ;
        if(temp < diff){
            diff = temp ;
        }
        else
            break ;
    }

    return min(x, diff) ;
}
int main()
{
    long long int a, b, c, d , diff, temp,i,t ;  
    cin >> t ;
    while(t--){
        cin >> a >> b >> c >> d ;
        temp = a -b ; 
        if (temp == 0 )
            cout <<"0\n" ;
        else if (temp > 0 ){
            // do binary search to find the value
            diff = searchForC(temp, c);
            diff = searchForD(diff, d);
            cout << diff << endl;    
        }

        else if (temp < 0 ){
            //swap the values of a with b , and c with d 
            swap(a, b); 
            swap(c, d) ;
            //do binary search to find the value
            diff = searchForC(abs(temp), c); 
            diff = searchForD(abs(temp), d);
            cout << diff << endl ;
        }
    }
    
}
