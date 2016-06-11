def abc(k):
    count = 0
    s = 2
    temp = k/5
    while(temp > 0):
        temp /= 5
        count += 1 
        s *= 10
    print "s = ", s
    print "count = ", count

for _ in range(input()):
    abc(input())
"""
for _ in range(input()):
    k = input()
    k = k-1
    arr= [0, 2, 4, 6]
    count = 0 
    temp = k
    while(k!=0):
        k = k/5 
        count += 1
""" 
