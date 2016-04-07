#include<stdio.h>

#define ll long long
#define M 1000000007

ll pw(ll a, ll b){
  ll r;
  if(b==0) return 1;
  r = pw(a,b/2);
  r = (r*r)%M;
  if(b%2) r = (r*a)%M;
  return r;
}

int main()
{
    ll t, n, k ;
    scanf("%lld", &t);
    while(t--){
        scanf("%lld %lld", &n , &k) ;
        printf("%lld\n", (pw(k-1, n-1)*k)%M);
    }
return 0 ;
}
