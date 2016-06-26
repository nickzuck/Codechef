# I'm writing the worst python code in my entire life
# God please forgive me for doing this
# I'm sorry Guido Van Rassum

arr =[0,2,4,6,8]
def abc(k):
    finalSum = 0
    while(k >= 6):
        count = 0
        s = 2
        temp = k/5
        temp2 = 1
        while(temp > 0):
            temp /= 5
            temp2 *= 5
            count += 1 
            s *= 10
        #print "s = ", s
        #print "count = ", count
        rem = k - temp2
        r1, r2 = qwer(rem, temp2)
        print "r1 = ", r1
        print "r2 = ", r2 
        s  = s + s*r1
        k = r2
        finalSum += s
        #print "After rem calculation = " ,s
    if k < 6 and k >=1:
        finalSum += arr[k-1]
    #print finalSum
    return finalSum

def qwer(rem, n):
    return rem/n, rem%n

for _ in range(input()):
    k = input()
    if k % 5 == 0:
        print (abc(k-1)+2)
    else:
        print (abc(k))
"""
for _ in range(input()):
    k = input()
    k = k-1
    arr= [0, 2, 4, 6]
    count = 0 
    temp = k
    while(k!=0):
        k = k/5 
        count += 1
""" 
