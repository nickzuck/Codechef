t = int(input())
for j in range(t):
	s = input()
	stack = []
	add = 0
	for i in range(len(s)) :
		if s[i] == "<" :
			stack.append(s[i])
		else :
			if len(stack) == 0 :
				break 
			stack.pop()
			if len(stack) == 0 :
				add = i
	if len(stack) != 0:
		print (0)		
	else :
		print (add +1)