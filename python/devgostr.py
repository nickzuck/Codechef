# For Subtask 1
def task1(s, k):
    if (len(s) <3 ):
        # The string is automatically a good string  
        # Check the hamming distance of s with t
        ham = 0 
        for i in s:
            if i != 'a':
                ham += 1
        if(ham <= k):
            print "1"
        else:
            print "0"
 
    else:
        # No String can be a good string
        print "0" 


# Check if 1 belongs to a and 0 belongs to b
# b stands for binary string
def checkForAFirst(b, s) : 
    # a --> 1
    # b --> 0
    ham = 0 
    for index, value in enumerate(b):
        if value == '0' and s[index] != 'b':
            ham += 1
        elif value == '1' and s[index] != 'a':
            ham += 1
    return ham

# Check if 0 belongs to a and 1 belongs to a
def checkForBFirst(b, s):
    # a --> 0 
    # b -- 1
    ham = 0 
    for index, value in enumerate(b):
        if value == '0' and s[index] != 'a':
            ham += 1
        elif value == '1' and s[index] != 'b':
            ham += 1
    return ham

# For Solving subtask3
def task3(s, k):

    goodStrings = [ ['1'], ['10', '11'] , ['100', '101', '110'], ['1001', '1010'
        ,'1011', '1100', '1101'], ['10010', '10011', '10100', '10110', '11001', 
        '11010', '11011'],['100100', '100101', '100110', '101001', '101100',
        '101101', '110010', '110011', '110100', '110110'], ['1001100', '1010010'
        ,'1010011', '1011010', '1100100', '1100101', '1100110'],
        ['10011001','11001100'],[],[],[],[],[] ]
    ans = 0
    for i in goodStrings[len(s)-1]:
        ham = checkForAFirst(i, s)
        #print "in A first"
        #print "%s  %d" %(i, ham)
        if(ham <= k):
            ans += 1

        ham = checkForBFirst(i, s)
        #print "In B first"
        #print "%s %d" %(i, ham)
        if(ham <= k):
            ans += 1
    print ans 




# Main function start here 
for t in range(input()):
    a, k = map(int, raw_input().split())
    s = raw_input()
    if(a == 1):
        task1(s, k)   
    elif(a == 2):
        task3(s, k)
    else:
        print "0"
