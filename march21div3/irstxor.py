t = int(input())
for _ in range(t):
	n = int(input())
	binary = bin(n)[2:]
	a = []
	b = []
	bOne = False
	aOne = False
	# print("binary :", binary)
	for bit in binary:
		if bit == '0':
			a.append('1')
			b.append('1')
		else :
			if aOne:
				a.append('0')
				b.append('1')
				# bOne = True
			else:
				a.append('1')
				b.append('0')
				aOne = True
	a = int("".join(a), 2)
	b = int("".join(b), 2)
	print (a*b)
