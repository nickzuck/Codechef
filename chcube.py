t = input ()
for i in range(t):
	str = raw_input ()
	elem = str.split(" ")
	arr = [0, 0, 0 ,0, 0, 0]
	for i in elem:
		if (i == 'black'):
			arr[0] += 1
		elif (i == 'blue'):
			arr[1] += 1 
		elif (i == 'red') :
			arr[2] += 1 
		elif (i == 'green') :
			arr[3] += 1 
		elif (i == 'yellow'):
			arr[4] += 1 
		elif (i == 'orange'):
			arr[5] += 1 
	flag = 0 
	for i in  arr : 
		if (arr[i] >= 3):
			flag = 1 
	if (flag == 1 ):
		print 'YES'	
	else :
		print 'NO'
