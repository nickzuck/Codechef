for _ in range(input()):
    s = raw_input()
    n = len(s)
    if n < 4:
        print "normal"
    else:
        m = {'c': 0 , 'h' : 1, 'e': 2, 'f': 3}
        valid_chars = m.keys()
        ans = 0 ; a = [0 , 0 , 0 , 0]
        for i in range(4):
            if s[i] in valid_chars:
                a[m[s[i]]] += 1 ;
        #print a
        if a == [1, 1, 1, 1]:
            ans += 1
        for i in range(4, n):
            if s[i-4] in valid_chars:
                a[m[s[i-4]]] -=1 
            if s[i] in valid_chars:
                a[m[s[i]]] += 1 
            #print i , i - 4, s[i-3:i+1]
            #print a
            if a == [1, 1, 1, 1]:
                ans += 1 
                
        if ans > 0:
            print "lovely" , ans 
        else:
            print "normal"
