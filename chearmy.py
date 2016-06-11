for _ in range(input()):
    k = input()
    arr= [0, 2, 4, 6]
    t1 = k%25 
    if t1 == 0:
        ans = 200*((k-1)/25)
    else:
        ans = 200*(k/25)
    k = t1
    temp = k%5 
    if temp == 0 and k != 0:
        ans += ((k/5) -1) * 20 + 8
    elif k == 0:
        ans += 88
    else:
        ans += (k/5)*20 + (temp-1)*2
    print ans
