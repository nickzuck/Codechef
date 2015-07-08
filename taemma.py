""" Sorting the given array and checking for how many values the sum matches the solution .......using python because of long constraints this time """

t = input () 
for i in range(t):
	n,m = map(int ,raw_input ().split ())
	p = list ()  
	p = map(int , raw_input().split ())
	p.sort(reverse = True) 
	#print p 
	sum = int (0) 
	cnt = int (0)
	flag  = int (0)
	for  j in range(len(p)) :
		if (sum + p[j]) > m :
			continue 
		elif (sum + p[j]) == m :
			sum += p[j]
			cnt += 1 
			flag =1 
			break 	
		else :
			sum += p[j]
			cnt += 1 
	if (sum == m):
		print cnt 
	else: 
		print -1 
