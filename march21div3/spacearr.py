t = int(input())
for _ in range (t):
	n = int(input())
	s = input()
	arr = [int(i) for i in s.strip().split()]
	# maxVal = max(arr)
	count = 0
	arr.sort()
	violated = False
	for i in range(n):
		if i+1 >= arr[i]:
			count += (i+1-arr[i])
		else :
			violated = True
			break

	if count % 2 == 0 or violated :
		print ("Second")
	else :
		print ("First")
