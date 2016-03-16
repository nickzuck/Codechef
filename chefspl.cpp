#include<iostream>
#include<cstring>

#define MAX 1000003

using namespace std ;


class Chefspl
{
  private:
    char str[MAX] ;
    int len;
  public:

    // Constructor to take the input of the string
    Chefspl(){
        cin >> str ; 
    }

    // x denotes the letter from the string which is removed
    bool isDoubleString(int x = -1){
        // Double string not possible for odd string and 0 length
        if(len == 0 || len%2 != 0)
            return false ;

        int h = len/2;
        for(int i = 0 ; i< h ; i++){
            //if(x == i){
            //    i ++ ;  // skip the letter which is considered to be removed
            // }
            if (str[i] != str[i+h]){
                return false;
            }
        }

        return true;
    }

    bool isSubsequence(int  s1, int e1 , int s2, int e2){
        int j = s2 ; 
        int lenA = (e1 - s1)+1 ; 
        int lenB = (e2 - s2)+1 ;

        for(int i = s1 ; i <= e1 ; i++){
            while(j <= e2 && str[i] != str[j]){
                j ++ ; 
            }
            if (j > e2){
                return false;
            }
            j++ ;
        }
        return true;

    }

    void getLength(){
        this->len = strlen(str) ;
    }


    void solve(){
        getLength() ; 
        bool flag = false ; 
        //cout << "Length = " << len << endl ;
        if(len%2 ==0){
            flag = isDoubleString();
            //cout << "Checked Double String\n";
        }
        else if (len > 1){
            int h  = len/2 ;
            flag = (isSubsequence(0, h , h+1, len-1) or isSubsequence(0, h-1, h,len-1));
        }

        if(flag){
            cout << "YES\n";
        }
        else 
            cout << "NO\n";
            
        
    }


};


int main()
{
    int t ; 
    cin >> t ; 
    while(t--){
        Chefspl obj ; 
        obj.solve();
    }
    
    
return 0 ;
}
