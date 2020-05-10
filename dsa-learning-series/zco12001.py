n = int(input())
counter = 0  ; max_l = -1 ;first_occur = -1
start = -1 ;ans_start = -1
chars = 0 ; max_chars = 0

s = input().strip().split()
for i in range(n):
	chars += 1
	if s[i] == '1':
		if counter == 0 :
			start = i
		counter += 1
		if counter > max_l :
			max_l = counter 
			first_occur = i
	else :
		counter -= 1
		if chars > max_chars and counter == 0:
			# print("here " , i)
			max_chars = chars
			ans_start = start
		if counter == 0:
			chars = 0

print(max_l, first_occur+1, max_chars, ans_start+1)