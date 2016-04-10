# For Subtask 1
for t in range(input()):
    a, k = map(int, raw_input().split())
    s = raw_input()
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