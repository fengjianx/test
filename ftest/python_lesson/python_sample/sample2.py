i = int(raw_input("net profit: "))
arr = [100,20,40,20,10]
rat = [0.01,0.015,0.03,0.05,0.075,0.1]
r = 0
for index in range(0,5):
	if i>arr[index]:
		r+=(i-arr[index]*rat[index])
		print (i-arr[index])*rat[index]
		i = arr[index]
print r
