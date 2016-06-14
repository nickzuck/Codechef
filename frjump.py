import math
n = input()
arr = map(int, raw_input().split())
q = input()
for _ in range(q):
    a = raw_input()
    b = a.split()
    if b[0] == '1':
        arr[int(b[1])-1] = int(b[2])
    elif b[0] == '2':
        r = int(b[1])
        mul = arr[0]
        t = 0
        t += r
        while(t < n):
            mul *= arr[t]
            t += r
        firstDigit = mul // 10 ** int(math.log(mul, 10))
        m = mul%1000000007
        print firstDigit, m

