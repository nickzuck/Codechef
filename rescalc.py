def getScores(s):
    score = 0 
    n = len(s)
    #print "n = ", n
    score += 4*(n/6)
    n %= 6
    #print "n = ", n
    score += 2* (n/5)
    #print "n = ", n
    n %= 5 
    score += n/4
    return score

def getWinner(scores):
    m = float('-inf')
    winner = -1
    for i, v in enumerate(scores):
        if v == m:
            winner = -2 
            break 
        elif v> m:
            m = v 
            winner = i
    return winner + 1 

for _ in range(input()):
    n = input()
    scores = []
    for i in range(n):
        arr = map(int, raw_input().split())
        temp = arr.pop(0) # Removing 'n', the number of items in array
        s = set(arr)
        scores.append(temp + getScores(s))
    #print scores
    winner = getWinner(scores)
    if winner == -1:
        print "tie"
    else:
        print "chef" if winner == 1 else  winner

