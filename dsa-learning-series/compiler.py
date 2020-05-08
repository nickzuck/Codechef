t = int(input())
for j in range(t):
	s = input()

	counter = 0 
	prefix = 0
	errorFound = False
	for i in range(len(s)):
		if s[i] == ">":
			if counter == 0 :
				errorFound = True
				break
			else :
				counter -= 1
				if counter == 0 :
					prefix = i

		if s[i] == '<':
			counter +=1

	if (counter == 0 or(counter !=0 and errorFound == False) )and prefix != 0:
		print (prefix + 1)
	else :
		print (0)