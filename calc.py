for _ in range(input()):
    n, b = map(int, raw_input().split())
    newN = n/2
    halfN = newN
    newN -= newN%b 
    ans = 0 ; var =  0
    for i in range(newN, halfN+1, b):
        temp = (n-i)*(i/b)
        ans = max(ans, temp)
        var = i
    
    i = var+b
    ans = max(ans, (n-i)*(i/b))
    print ans 
