for _ in range(input()):
    s = raw_input() 
    found = []
    flag = False
    for i in s:
        if i in found :
            flag = True 
            break 
        else:
            found.append(i)
    print "yes" if flag else "no"
