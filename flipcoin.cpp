/*After reading the tutorial of segment tree from code monk .. Now I think I can try to code the segment tree */

#include<iostream>
#include<algorithm>
#include<math.h>
#include<string.h>

#define MAX 100002

using namespace std ;
// total number of nodes for an array of n elements  = 2*n - 1 

int A[MAX] , tree[2*MAX +1] ; 
int lazy[MAX] ;
void build (int node , int start , int end)
{
    if (start == end){
        //leaf node
        tree[node] = A[start] ; 
    }
    
    else {
        int mid = (start + end) / 2 ; 
        
        //Perfom build on the left subtree
        build(node*2  , start , mid) ; 
    
        //Perfom build on the right subtree
        build(node*2 + 1 , mid+1 , end) ; 

        //internal nodes will have the sum of both of its children
        tree[node] = tree[2*node] + tree[2*node+1] ;
    }
}

void update_tree(int node ,int a, int b , int i , int j){

    if lazy[node] != -1{
        tree[node] = lazy[node] ;
        
        if(a != b){
            lazy[node*2] += lazy[node] // Mark child as lazy
            lazy[node*2 +1] += lazy[node] // Mark child as lazy
        }

        lazy[node] = -1 // Reset it
    }

    if (a >b || a >j || b<j )
        return ;

    if(a>= i && b <= j){
        if(tree[node])
            tree[node]  = 0 ; 
        else
            tree[node] = 1;
        if (a != b){
            lazy[node*2] += value ;
            lazy[node*2 +1] += value ;
        }
        return ;
    }
    update_tree(node*2, a, (a+b)/2, i , j );
    update_tree(node*2+1, 1+ (a+b)/2, i, j); 

    tree[node] = tree[node*2] + tree[node*2 +1] ;
}

int main ()
{
    int n,i , z, a, b,q ;
    cin >> n >> q;

    for (i = 0 ; i<n ; i++)
        A[i] = 0;

    build(1 , 0 , n-1); // node , start , end 
    memset(lazy, -1, sizeof(lazy)) ;
    

    while(q--){
        
        cin >> z >> a >> b ;
        // Update the coins from a to b
        if(z == 0){
            updateRange(1, 0, n-1, a, b);
        } 
        else{
            cout << query(1, 0, n-1, a, b) << endl;
        }

    }
return 0 ;
}
