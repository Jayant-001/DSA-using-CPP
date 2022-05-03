lst = [1,4,2,5,6,2,23,43,45,23,3,31,12,6,32,12,33,6]

def findMax(lst) -> int:
	mx = 0
	for i in lst:
		if i > mx:
			mx = i
	return mx

ans = findMax(lst)
print(ans)


print("Using built-in function max()")
print(max(lst))