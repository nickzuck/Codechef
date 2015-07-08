t = input () 
d = dict () 
for i in range (t) : 
	key = raw_input () 
	if key in d :
		d[key] += 1
	else :
		d[key] = 1 
for key in sorted(d):
	print key, d[key]