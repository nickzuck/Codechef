for _ in range(input()):
    n = input()
    ans = []
    ans.append(n)
    nos = (n-1)/2
    counter = 0
    val = n-1
    while(counter < nos):
        ans.insert(0, val)
        val -=1 
        counter += 1
    #print ans,
    nos = (n-1)/2
    counter = 0
    val = n+1
    if n%2 != 0 :
        while(counter < nos):
            ans.append(val)
            val += 1   
            counter += 1
    else:
        while(counter <= nos):
            ans.append(val)
            val += 1
            counter += 1
    #print ans 
    #print "sum = %d middleEle=%d, len = %d, mean =%f" %(sum(ans), ans[(len(ans)-1)/2], len(ans), sum(ans)/float(n))
    for i in ans:
        print i,
    print ""
