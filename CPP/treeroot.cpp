/*Was trying to find a some algo based solution....then tried solving it by mathematical and was so dumb that couldn't even get a simple logic that the id of the root appears only once,so we can easily get to the output ...
Have to turn to Editorial to find this easy solution :( :( */ 


#include<cstdio>

int main ()
{
  int t , n , i , sum , id , ans ; 
  scanf ("%d\n",&t)  ; 
  while (t--){
    ans = 0 ;
    scanf ("%d",&n); 
    for (i = 0 ; i<n ; i++){
      scanf ("%d %d",&id,&sum) ;
      ans += id - sum ; 
    }
  printf ("%d\n",ans) ; 
  }

return 0 ; 
}