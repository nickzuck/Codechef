for _ in range(input()):    
    n = input()
    arr = map(int, raw_input().split())
    flag = 1 
    if(n %2 ==0):
        flag = 0
    else:
        assumption = 1 
        mid = n/2 
        for i in range(n):
            if(arr[i] != assumption):
                flag = 0 
                break
            else:
                if(i < mid):
                    assumption += 1
                else:
                    assumption -= 1

    if(flag):
        print "yes"
    else:
        print "no"   
