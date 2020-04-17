for t in range(input()):
    n = input()
    a = map(int , raw_input().split()) 
    b = map(int, raw_input().split())
    a.append(900)
    time = 0 
    count = 0 
    for i, v in enumerate(b):
        if v+time <= a[i]:
            count += 1 
            #print "Done hai ", i
        #print "At" , i
        time = a[i]

    print count 
