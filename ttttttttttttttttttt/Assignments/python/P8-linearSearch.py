lst = [1,4,2,5,6,2,23,43,45,23,3,31,12,6,32,12,33,6]
a = int(input("Enter a number to search in list: "))

def search(lst) -> int:
	for i in range(len(lst)):
		if a == lst[i]:
			return i
	return -1

print("Using custom function")
ans = search(lst)
if(ans == -1):
	print("{} is not present in list".format(a))
else:
	print("Index of {} is {}".format(a, ans))

print()	
print("Using built-in function")
try:
	print("Index of {} is {}".format(a,lst.index(a)))
except ValueError:
	print("{} is not present in list".format(a))