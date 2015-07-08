t = input ()
for i in range (t) : 
	raw_input () 
	a = map(int , raw_input().split() )
	b = list () 
	for j in a : 
		if not a[j] in b :
			b.append(a[j])
	print len (b) ;   