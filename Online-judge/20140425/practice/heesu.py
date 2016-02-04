word = raw_input()
result = {}

max1 = word[0].upper()
max2 = max1
# print ("max : %c, %c\n") % (max1, max2)

for i in word.upper():
	if i not in result.keys():
		result[i] = 0
	result[i] += 1
	# print ("[%c]%d ") % (i, result[i]),
	if(result[max1] < result[i]):
		# print "hi ",
		max1 = i
	elif(result[max1] == result[i]):
		# print "ho ",
		max2 = i
	# print ("max : %c, %c") % (max1, max2)

if(max1 != max2):
	print '?'
else:
	print max1:1
