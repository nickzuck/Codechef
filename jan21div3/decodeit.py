t = int(input())
for i in range(t):
	n = int(input())
	inp = input()	
	ans = ""
	for i in range(0, n, 4):
		ans += chr(97+int(inp[i:i+4], 2))
	print (ans)