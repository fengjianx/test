def printme(str):
	print str;
	return;

printme('this is fengjian speaking');
printme('this is not fengjian speaking');

def changeme(mylist):
	mylist.append([1,2,3,4]);
	print "the value inside function: ", mylist
	return

mylist=[1,2,3,4];
changeme(mylist);
print 'the value outside the function', mylist

def printinfo(name,age=35):
	print "the name is: ",name
	print "the age is: ",age
	return

printinfo(age=56,name="monkey")
printinfo(name='people')

def printinfo2(arg1,*vartuple):
	print "output: "
	print arg1
	for var in vartuple:
		print var
	return

printinfo2(10)
printinfo2(50,60,70)

sum = lambda arg1, arg2, arg3:arg1+arg2+arg3

print sum(10,20,10)
print sum(20,10,10)
