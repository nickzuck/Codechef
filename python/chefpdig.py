t = input()

for _ in range(t):
    n = raw_input()
    d = dict()
    for i in n:
        if i in d:
            d[i] += 1
        else:
            d[i] = 1 

    start = 65 
    end = 91
    ans = []
    for number in range(start, end):
        strN = str(number)
        if strN[0] == strN[1]:
            if strN[0] in d:
                if d[strN[0]] >= 2 :
                    ans.append(chr(number))
        else:
            if strN[0] in d and strN[1] in d :
                ans.append(chr(number))

    ans.sort()
    print "".join(ans)
