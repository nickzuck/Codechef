import time 

def get_time_obj(time_str):
	return time.strptime(time_str, "%I:%M %p")

t = int(input())
for i in range(t):
	p = input()
	meet_time = get_time_obj(p)

	n = int(input())
	ans = []
	for i in range(n):
		s = input()
		a, b, c, d = s.split()
		# start_str, end_str = s.split()
		start_time, end_time = get_time_obj(a +" " + b), get_time_obj(c + " " + d) 
		if start_time <= meet_time <= end_time:
			ans.append("1")
		else :
			ans.append("0")
	print ("".join(ans))