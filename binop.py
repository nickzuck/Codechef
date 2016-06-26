for _ in range(input()):
    a = raw_input()
    b = raw_input()
    o = 0 
    z = 0 
    # Add a special case if all the bits of the number are same
    if len(set(a)) == 1:
        print "Unlucky Chef"
    else:
        for i, value in enumerate(a):
            if a[i] != b[i]:
                if a[i] == '1':
                    o += 1 
                else:
                    z += 1

        temp = min(o, z)
        print "Lucky Chef"
        temp2 = max(o,z)
        print temp +  (temp2 - temp)
        #print (temp + (max(o, z) - temp))
