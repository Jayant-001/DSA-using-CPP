message = input("Enter message")
key = int(input("ENter key"))

ans = list()
for m in message:
    t = ord(m)
    if t <= 97 and t >= 101:
        t = t+key
        print(char(t))

print(ans)

matrix = [
    ['a', 'b', 'c', 'd', 'e'],
    ['f', 'g', 'h', 'i', 'j'],
    ['k', 'l', 'm', 'n', 'o'],
    ['p', 'q', 'r', 'x', 't'],
    ['u', 'v', 'w', 'x', 'y'],
]

n = int(input())

matrix = [
    ['a', 'b', 'c', 'd', 'e'],
    ['f', 'g', 'h', 'i', 'j'],
    ['k', 'l', 'm', 'n', 'o'],
    ['p', 'q', 'r', 'x', 't'],
    ['u', 'v', 'w', 'x', 'y'],
]

matrix[0] = matrix[4]
print(matrix)
for i in range(0, n):
    s = input()
    

s = input()
if t <= 97 and t >= 101:
        t = t+15
        

ct = 0
def encrypt(text,s):
    result = ""

    # traverse text
    for i in range(len(text)):
        char = text[i]
 
        # Encrypt uppercase characters
        # ct = 0
        for m in message:
            t = ord(m)
            if (t >= 97) and (t <= 101):
                t = t+15
                if t == 97 or t == 101 or t == 105 or 111 or 117:
                    ct = ct+1

 
print(ct)