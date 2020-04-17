# Pre-processing
s = [0]
temp =  0 
for i in range(1,100001):
    b = str(i)
    if b == b[::-1]:
        temp += i 
    s.append(temp)

print s[1:200]
for t in range(input()):
    l, r = map(int, raw_input().split())
    print s[r]-s[l-1]
