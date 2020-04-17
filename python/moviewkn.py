for t in range(input()):
    n = input()
    l = map(int, raw_input().split())
    r = map(int, raw_input().split())
    lr = []
    for i in range(n):
        lr.append(l[i]* r[i])
    maxim = max(lr)
    index = -1
    maxR = -1
    for i, value in enumerate(lr):
        if maxim == value :
            if maxR < r[i]:
                maxR = r[i]
                index = i

    print index+1
