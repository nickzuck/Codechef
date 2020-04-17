for _ in range(input()):
    n = input()
    s = raw_input()
    state  = 0 
    flag = 1
    for v, i in enumerate(s):
        if i == 'H':
            state += 1 
            if(state > 1 or state < 0):
                flag = 0
                break 
        elif i == 'T':
            state -= 1
            if(state > 1 or state < 0):
                flag = 0
                break  

    if(flag and state == 0):
        print "Valid"
    else:
        print "Invalid"
