#include<cstdio>
#include<cmath>
#include<algorithm>
#include<iostream>

#define MAX  314163

using namespace std ; 

char str [27] ;

int main ()
{
  int n , rc, q ,  i , x , trowinc[MAX] = {0}, tcolinc [MAX] = {0};
  cin >>  n >> q ;
  while (q--){	
    cin >> str >> rc >> x ;
    if (str[0] == 'R')
      trowinc[rc] += x ; 
    else if (str[0] == 'C')
      tcolinc[rc] += x ;
  }  
  int maxr = 0 ,maxc = 0 ; 
  for (i = 1 ; i<MAX ; i++){
    maxr = max (maxr , trowinc[i]);
    maxc = max (maxc , tcolinc[i]); 
  }
  printf ("%d\n",maxr+maxc) ; 
return 0 ; 
}