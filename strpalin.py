for t in range(input()):
    str1 = raw_input().strip()
    str2 = raw_input().strip()
    set1 = set(str1)
    set2 = set(str2)
    finalSet = set1.intersection(set2)
    if len(finalSet) == 0:
        print "No"
    else:
        print "Yes"
