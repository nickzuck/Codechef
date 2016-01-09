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


void updateRange(int node, int start, int end, int l, int r)
{
    // out of range
    if (start > end or start > r or end < l)
        return;

    // Current node is a leaf node
    if (start == end)
    {
        // Add the difference to current node
        if (tree[node] ==1){
            tree[node] -= 1;
        }
        else{
            tree[node] += 1 ;
        }
        return;
    }

    // If not a leaf node, recur for children.
    int mid = (start + end) / 2;
    updateRange(node*2, start, mid, l, r);
    updateRange(node*2 + 1, mid + 1, end, l, r);

    // Use the result of children calls to update this node
    tree[node] = tree[node*2] + tree[node*2+1];
}

int query(int node , int start , int end , int l , int r) {
    
    //range represented by node is completely outside 
    if (r < start ||  end < l ){
        return 0 ;
    }

    //range represented by node is completely inside the node
    if (l <= start && end  <= r){
        return tree[node] ;
    }

    //else : range represented by node is partially inside and 
    //partially outside the given range
    int mid = (start + end)/2 ; 
    int p1 = query(2* node , start , mid , l , r) ; 
    int p2 = query(2*node +1 , mid+1 , end , l , r) ;
    return (p1 + p2) ;
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
