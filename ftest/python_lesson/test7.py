a = 20
b = 20

if (a is b):
	print "a and b are the same id"
else:
	print "a and b are not the same id"

if (id(a)==id(b)):
	print "a and b are the same id"
else:
	print "a and b are not the same id"

b = 10

if (a is not b):
	print "a is not same as b"
else:
	print "a is the same as b"
