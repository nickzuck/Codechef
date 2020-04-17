t = input () 
for i in range(t) : 
    n , m = raw_input().split()
    n = int(n) 
    m = int(m)
    a = map(int ,raw_input().split())
    a.sort(reverse=True) 
    res = 0 
    for j in a : 
	m -= j
	res += 1
	if m <= 0:
	     break
    if m>0 : 
	res = -1 #impossible 
    print res 