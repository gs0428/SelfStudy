import sys

input = sys.stdin.readline

N = int(input())
scores = [int(x) for x in input().split()]
M = max(scores)

result = sum([x / M * 100 for x in scores])

print(result / N)
