def ipow(base, exp):
    result = 1
    while(exp):
        if(exp&1):
            result *= base
        exp >>= 1
        base *= base
    return result


for t in range(input()):
    n, k = map(int , raw_input().split())
    if k ==1 and n== 1:
    	print "1"
    else:
        # Inefficient method
        #ans = ((k-1)**(n-1))*k

        # Efficient method
        ans = (ipow(k-1, n-1))*k
        print ans%1000000007
