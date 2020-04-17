def calculate(s , q , a , b):
	sValues = []
	MOD = 2**32
	sValues.append(s)
	for i in range(2,q+1):
		s = ((((a%MOD)*(s%MOD))%MOD) + b%MOD)%MOD
		sValues.append(s)
	return sValues

q , s1 , a , b = map(int , raw_input().split())
sValues = calculate(s1 , q , a , b)
