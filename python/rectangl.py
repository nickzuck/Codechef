for _ in range(input()):
    a = map(int, raw_input().split())
    a.sort()
    outputs = {True: 'YES', False : 'NO'}
    
    if a[0]== a[1] and a[2] == a[3]:
        print outputs[True]
    else:
        print outputs[False]
