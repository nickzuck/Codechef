n = input()
arr = map(int , raw_input().split())
s = list(set(arr))
s.sort()
j = 0 
for i in range(n+1):
    # print "j = %d" %(j)
    if (s[j] != i):
        print i,
    else :
        j += 1
