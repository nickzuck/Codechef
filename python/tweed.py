for _ in range(input()):
    n, s = map(str, raw_input().split())
    n = int(n)
    a = map(int, raw_input().split())
    if n == 1 and a[0] %2 == 0 and s[-1] == 'e':
        print "Dee"
    else:
        print "Dum"
    
