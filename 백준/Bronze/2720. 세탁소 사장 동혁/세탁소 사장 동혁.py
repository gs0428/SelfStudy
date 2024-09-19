import sys

input = sys.stdin.readline

T = int(input())

for i in range(T):
    C = int(input())
    q = int(C / 25)
    C %= 25
    d = int(C / 10)
    C %= 10
    n = int(C / 5)
    p = C % 5
    print(f"{q} {d} {n} {p}")
