def sumDigits(n):
    s = 0 
    while(n):
        s += n%10
        n /= 10
    return s

n = input()
count = 0
if n  >=97:
    for x in range(n-97, n+1):
        temp = sumDigits(x)
        if x + temp + sumDigits(temp) == n:
            count += 1
else:
    for x in range(n+1):
        temp = sumDigits(x)
        if x + temp + sumDigits(temp) == n:
            count += 1
print count
    
