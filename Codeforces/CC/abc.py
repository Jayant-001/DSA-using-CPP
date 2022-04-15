
n = int(input())
for i in range(0, n):

    text = input()

    ct = 0
    for m in text:
        t = ord(m)
        if (t >= 97) and (t <= 101):
            t = t+15
            if t == 97 or t == 101 or t == 105 or t == 111 or t == 117:
                ct = ct+1
        if (t >= 102) and (t <= 106) :
            t = t-15
            if t == 97 or t == 101 or t == 105 or t == 111 or t == 117:
                ct = ct+1



print(ct)

# ct = 0


# def encrypt(text, s):
#     result = ""

#     message = "wx, ewxd xd p bfplxujxnv cofns etde."
#     ct = 0
#     for m in message:
#         t = ord(m)
#         if (t >= 97) and (t <= 101):
#             t = t+15
#             if t == 97 or t == 101 or t == 105 or 111 or 117:
#                 ct = ct+1
#         if (t >= 102) and (t <= 106) :
#             t = t-15
#             if t == 97 or t == 101 or t == 105 or 111 or 117:
#                 ct = ct+1


# # print(ct)