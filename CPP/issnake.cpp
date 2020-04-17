#include<bits/stdc++.h>

using namespace std ;

#define rep(i,a,b) for(int i= a ; i < b ; i++)

string s[2] ;
string t[2] ;

int dx[3] = {-1, 1, 0} ;
int dy[3] = {0, 0, 1};

int n;

void dfs(int x, int y){
    s[x][y] = '.' ;
    rep(i,0,3){
        int a = x + dx[i] ;
        int b = y + dy[i] ;
        if(a >=0 and a<2 and b >=0 and b<n and s[a][b] == '#'){
            dfs(a, b);
            break ; // To perform bfs only once 
        }
    }
        
}

bool check(int x, int y){
    dfs(x, y);
    rep(i, 0, n){
        if(s[0][i] == '#' or s[1][i] == '#')
            return false ;
    }
    return true ;
}

int main()
{
    int test;
    cin >> test; 
    while(test--){
        cin >> n ;
        cin >> s[0] >> s[1] ;
        t[0] = s[0] ;
        t[1] = s[1] ;
        bool flag = false ;
        rep(i,0,n){
            if(s[0][i] == '#' || s[1][i] == '#'){
                if(s[0][i] == '#' and check(0, i))
                    flag = true ;
                s[0] = t[0];
                s[1] = t[1] ;
                if(s[1][i] == '#' and check(1,i))
                    flag = true ;
                break;
            } 
        }

        cout << (flag ? "yes" : "no") << endl;
    }
return 0 ;
}
