for _ in range(input()):
    k = input()
    arr= [0, 2, 4, 6]
    temp = k%5 
    if temp == 0 :
        ans = ((k/5)-1)*20 + 8
    else:
        ans = (k/5)*20 + (temp-1)*2
    print ans
