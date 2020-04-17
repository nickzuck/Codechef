#include<bits/stdc++.h>

#define pb push_back
#define mp make_pair

using namespace std ;

vector<pair<int, int> > createLine(int x1, int y1, int x2, int y2){
    vector<pair<int, int> > ans;
    if(x1 == x2){
        if(y1 < y2){
            ans.pb(mp(x1, y1)); 
            ans.pb(mp(x2, y2));
        }
        else{
            ans.pb(mp(x2, y2));
            ans.pb(mp(x1, y1));
        }
        return ans ;
    }
    else{
        if(x1 < x2){
            ans.pb(mp(x1, y1)); 
            ans.pb(mp(x2, y2));
        }
        else{
            ans.pb(mp(x2, y2));
            ans.pb(mp(x1, y1));
        }
        return ans ;
    
    }
}

void pvp(vector<pair<int, int> > v){
    for(int i = 0 ; i<v.size() ; i++){
        cout << v[i].first << " " << v[i].second << endl ;
    }
}

// Check if any given point is same in the lines
bool samePoint(vector<pair<int, int> > first, vector<pair<int, int> > second){
    if(first[0] == second[0] or first[0] == second[1] or first[1] == second[0] or first[1] == second[1])
        return true ;
    else
        return false ;
}

bool isColinear(pair<int, int> a, pair<int, int> b, pair<int, int> c){
    return ((c.first - a.first)*(b.second - a.second) == (c.second - b.second)*(b.first - a.first));
}

bool lie(pair<int, int> a, pair<int, int> b){
    // Check the parallel axis
    if(a.first == b.first){
        return (b.second <= a.second) ;
    }
    else{
        return (b.first <= a.first) ;
    }
}

int main()
{
    int t,  n, flag;
    vector<pair<int, int> > first, second ;
    cin >> t; 
    while(t--){
        flag = 0 ;
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2 ;
        first = createLine(x1, y1, x2, y2);
        cin >> x1 >> y1 >> x2 >> y2 ;
        second = createLine(x1, y1, x2, y2);
        if(samePoint(first, second)){
            flag = 1 ;    
        }
        else{
            if(isColinear(first[0],first[1],second[0]) and isColinear(first[0], first[1], second[1])){
                if(lie(first[0], second[1]) or lie(first[1], second[0])){
                    flag = 1 ;
                }
            }
        }

        if(flag == 1)
            cout << "yes" << endl ; 
        else
            cout << "no" << endl ;
    }
return 0 ;
}
