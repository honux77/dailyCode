def parseOct(binstr):
	global result
	pos = len(binstr) -3
	if pos <= 0:
		oct = binstr
	else:
		pre = binstr[:pos]
		oct = binstr[pos:]
		parseOct(pre)
	result = result * 10 + convert(int(oct))

def convert(num):
	r = 0
	for i in [1,2,4]:
		n = num % 10;
		r += n * i;
		num = num /10;
	return r

result = 0
n = raw_input()
parseOct(n)
print result
