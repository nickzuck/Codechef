for _ in range(input()):
    s = raw_input()
    n = len(s) # storing the size of string 
    j = n-1
    i = 0 
    newStringFront = []
    newStringBack = []
    possible = True
    replacement = "abcdefghijklmnopqrstuvwxyz"
    while(i<=j):
        if s[i] != '.'  and s[j] != '.':
            if s[i] == s[j]:
                newStringFront.append(s[i])
                newStringBack.append(s[j])
                i +=1 
                j -= 1
                continue
            else:
                possible = False
                break 
        else:
            if s[i] == '.' and s[j] == '.':
                newStringFront.append(replacement[0])
                newStringBack.append(replacement[0])
            elif s[i] == '.':
                newStringFront.append(s[j])
                newStringBack.append(s[j])
            else:
                newStringFront.append(s[i])
                newStringBack.append(s[i])

            i+= 1
            j -= 1
                
    if possible:
        if n %2 != 0 :
            newStringFront.pop()
        newStringBack.reverse()
        print "".join(newStringFront+ newStringBack)
    else:
        print "-1"
