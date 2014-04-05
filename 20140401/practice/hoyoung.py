count1 = [0] * 41
count0 = [0] * 41

def fact_count(n):
	if n<2:
		return;
	global count0, count1
	count0[n] = count0[n-1] + count0[n-2];
	count1[n] = count1[n-1] + count1[n-2];
	# print n, count0[n], count1[n]

def fact(n):
	global count0, count1
	count1 = [0] * 41
	count0 = [0] * 41
	count0[0] =1
	count1[1] =1
	for i in range(2,n+1):
		fact_count(i);

n=input()
for i in range(n):
	x=input()
	fact(x)
	print count0[x], count1[x]

