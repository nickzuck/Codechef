# just to check what I thought is correct or not
# Trying to solve subtask 1 

from math import factorial as f 
def binomial(n, k):
    if n == k or k == 0:
        return 1
    a = f(n)
    b = f(n-k)
    c = f(k)
    div = a // (b*c)
    return div

"""
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
"""

# Main function to perform calculations
# After all the test cases were handled the final call will 
# be given to this
def calculate(n , k ) :
    ans = 0
    if k %2 == 0:
        for i in range(0, k+1, 2):
            ans += binomial(n, i)
    else: 
        for i in range(1, k+1, 2):
            ans += binomial(n, i)
    print ans 


for _ in range(input()):
    n, k = map(int ,raw_input().split())
    arr = map(int, raw_input().split())
    if k <= n :
        calculate(n , k)
    else:
        # if k is odd, find the value of the largest odd value 
        # less than or equal to n
        if k%2 != 0:
            # if n is odd the nearest value of k is n itself
            if n%2 ==0 :
                k = n-1
            # else the nearest value is n-1
            else:
                k = n
        
        # if k is even, find the value of the largest even value 
        # less than or equal to n
        else:
            if n%2 == 0 :
                k = n 
            else:
                k = n-1
        
        # After the value has been set find the
        # combinatorics
        calculate(n ,k)
