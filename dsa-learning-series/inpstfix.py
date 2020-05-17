t = int(input())
ops = {
	"*": 3,
	"/" : 3,
	"^" : 4,
	"-" : 2,
	"+" : 2
}
operands = ops.keys()
for i in range(t):
	ans = []
	n = input()
	s = []
	queue = []
	inp = input()
	for char in inp :
		# print (s, ans)
		if char == '(' :
			s.append(char)
		elif char == ')':
			while(s[-1] != "("):
				ans.append(s.pop())
			s.pop()
		elif char in operands:
			q = []
			if len(s) > 0 :
				top = s[-1]
				if top in operands:
					while(ops[top] > ops[char]):
						ans.append(s.pop())
						if len(s) == 0 :
							break

						top = s[-1]
						if top not in operands:
							break
			s.append(char)
			# s.extend(q)
		else :
			ans.append(char)
	# print("rem stack : ", s)
	while(len(s) > 0 ):
		ans.append(s.pop())
	print ("".join(ans))

# if top.isupper():
# 	st += top
# else :
# 	ans.append(st)
# 	st = ""
# 	ans.append(top)