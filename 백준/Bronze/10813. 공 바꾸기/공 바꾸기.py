import sys

input = sys.stdin.readline

N, M = [int(x) for x in input().split()]

balls = [x for x in range(1, N + 1)]

for i in range(M):
    l, r = [int(x) - 1 for x in input().split()]
    prevL, prevR = balls[l], balls[r]
    balls[l], balls[r] = prevR, prevL

print(" ".join([str(x) for x in balls]))
