# just to check what I thought is correct or not
# Trying to solve subtask 1 

from math import factorial as f 
def binomial(n, k):
    if n == k:
        return 1
    a = f(n)
    b = f(n-k)
    c = f(k)
    div = a // (b*c)
    return div


for _ in range(input()):
    n , k = map(int, raw_input().split())
    arr = map(int, raw_input().split())
    if k>n : 
        k = k%n
        if n%2 != 0 :
            k+= 1

    ans = 0 
    if k%2 == 0 :
        if n == 2 and k ==2 : 
            k  -= 1
        ans =1 
        for i in range(2,k+1,2):
            ans += binomial(n,i)
    else:
        for i in range(1,k+1, 2):
            ans += binomial(n,i)
    print ans
