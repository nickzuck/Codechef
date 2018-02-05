for _ in range(input()):
    n, m, x, k = map(int, raw_input().split())
    s = raw_input()
    count_even = 0
    count_odd = 0
    for i in s:
        if i=='E':
            count_even += 1 
        else:
            count_odd += 1
    
    # Start processing for months
    cases_filed = 0
    for year in range(1, m+1):
        if year%2 == 0:
            if count_even <= x:
                cases_filed += count_even
                count_even = 0
            else:
                cases_filed += x
                count_even -= x
        else:
            if count_odd <= x:
                cases_filed += count_odd
                count_odd = 0
            else:
                cases_filed += x
                count_odd -= x

    if cases_filed >=n :
        print "yes"
    else:
        print "no"
