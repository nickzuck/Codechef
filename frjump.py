from math import log
MOD = 1000000007
def preprocess(arr, n, brr):
    for i in arr:
        brr.append(log(i))
"""
import math
n = input()
arr = map(float, raw_input().split())
q = input()
preprocess(arr, n)
for _ in range(q):
    a = raw_input()
    b = a.split()
    if b[0] == '1':
        index = int(b[1]) - 1
        arr[index] = int(b[2])
       # while(arr[index] < 1):
        arr[index] = math.log(arr[index], 10)
        
    elif b[0] == '2':
        print arr
        r = int(b[1])
        mul = 0
        for i in range(0,n,r):
            mul += arr[i]
        print "mul = ", mul
"""      
n = input()
arr = map(int, raw_input().split())
brr = []
q = input()
preprocess(arr, n, brr)
for _ in range(q):
    a = raw_input()
    b = a.split()
    if b[0] == '1':
        index = int(b[1]) - 1
        arr[index] = int(b[2])
        brr[index] = log(arr[index], 10)

    elif b[0] == '2':
        r =int(b[1])
        #print arr
        #print brr
        s = 0 
        mul = 1
        i = 0 
        while(i < n):
            s += brr[i]
            mul *= arr[i] % MOD
            i += r
        temp = 10**s
        ans1 = temp // 10 ** int(log(temp, 10))
        ans2 = mul%MOD
        print int(ans1), ans2
