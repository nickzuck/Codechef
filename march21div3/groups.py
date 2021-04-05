t = int(input())
for _ in range(t):
	count = 0 
	s = input()
	lastOne = False
	for char in s:
		if char == '1':
			if not lastOne:
				count += 1
			lastOne = True
		else :
			lastOne = False
	print (count)