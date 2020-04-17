for _ in range(input()):
    a = raw_input()
    a = a.replace("=", "")
    longest= 0 
    n = len(a)
    if n == 0:
        print 1
    else:
        prev = a[0]
        curr_len = 1 
        for i in range(1, n):
            if prev == a[i]:
                curr_len += 1
            else:
                longest = max(longest, curr_len)
                curr_len = 1 
                prev = a[i]

        longest = max(longest, curr_len)
        print longest+1
