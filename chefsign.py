for _ in range(input()):
    a = raw_input()
    curr = 1 
    maxi = 1 
    maxPos = 1
    ans = []
    n = len(a)
    for i in range(n):
        if a[i] == '<':
            curr += 1
            if curr > maxi: 
                maxi = curr
                maxPos = i+1
        elif a[i] == '>':
            curr -=1 
            if curr == 0 :
                curr = 1
                maxi += 1
        else:
            continue
    
    """
    curr = 1
    for i in range(n):
        if i != maxPos:
            print curr, a[i],
            if(a[i] == '<'):
                curr += 1
            elif(a[i] == '>'):
                curr -=1
            if (i != n-1 and i != 0):
                if(a[i] == '<' and a[i+1] == '>'):
                    curr = maxi
                elif(a[i] == '>' and a[i+1] == '<'):
                    curr = 1

        else:
            curr = maxi
            print curr, a[i],

            if(a[i] == '<'):
                curr += 1
            elif(a[i] == '>'):
                curr -=1
    print curr
    """
    print maxi
