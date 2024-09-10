A = int(input())
B = input()

i = len(B) - 1
while i >= 0:
    print(A * int(B[i]))
    i -= 1
print(A * int(B))
