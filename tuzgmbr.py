arr = [[False, True, True],
        [True, False, True],
        [True , True, False],
        [True, True, True]
        ]
for t in range(input()):
    n, m = map(int, raw_input().split())
    n -= 1 
    m -= 1
    n %= 4 
    m %= 3
    if(arr[n][m]):
        print "Tuzik"
    else:
        print "Vanya"
