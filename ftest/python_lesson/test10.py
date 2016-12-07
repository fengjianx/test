for letter in 'fengjian':
	print "current letter: ",letter
fruits = ['banana','apple','pear','orange']
for fruit in fruits:
	print "current fruit: ",fruit
for index in range(len(fruits)):
	print "current fruit is also: ",fruits[index]


print "good bye"

for num in range(10,20):
	for i in range (2,num):
		if num%i==0:
			j=num/i
			print "%d is equal to %d * %d"%(num,i,j)
			break
	else:
		print "%d is a zhishu"%num

	
