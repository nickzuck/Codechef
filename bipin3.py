for t in range(input()):
    n, k = map(int , raw_input().split())
    if k ==1 and n== 1:
    	print "1"
    else:
        ans = ((k-1)**(n-1))*k
        print ans%1000000007
