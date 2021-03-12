t = int(input())
for _ in range (t):
	n = int(input())
	s = input()
	arr = [int(i) for i in s.strip().split()]
	maxVal = max(arr)
	count = 0
	for i in arr:
		if maxVal > i :
			count += (maxVal-i)

	if count % 2 == 0 :
		print ("Second")
	else :
		print ("First")
