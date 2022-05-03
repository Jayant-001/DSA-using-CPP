
a = int(input("Enter value of a: "))
b = int(input("Enter value of b: "))

# using recusion
def expo(a, b) -> int:
	if(b == 1):
		return a
	return a * expo(a, b-1)

res = expo(a, b)
print("Using recursion:")
print("result = ", res)


print("Using built-in function")
print("result = ", pow(a, b))