t = input()
for t1 in range(t):
	n = input()
	dicti = { }
	for i in range(n):
		name,sign = raw_input().split()
		if(sign == '+'):
			dicti[name] = 1;
		else:
			dicti[name] = -1;
	sum = 0
	for key in dicti:
		sum = sum + dicti[key]
	print sum 