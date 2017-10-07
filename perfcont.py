for _ in range(input()):
    n , p = map(int, raw_input().split())
    cakewalkMinLimit = p/2 
    hardMaxLimit = p/10
    cakewalkProblems = 0 
    hardProblems = 0 
    arr = map(int, raw_input().split())
    for temp in arr:
        if temp >= cakewalkMinLimit:
            cakewalkProblems += 1 
        if temp <= hardMaxLimit :
            hardProblems += 1 
    if (cakewalkProblems == 1 and hardProblems == 2):
        print "yes"
    else:
        print "no"
