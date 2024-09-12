import sys

input = sys.stdin.readline
N = int(input())
nums = [int(x) for x in input().split()]

print(min(nums), max(nums))
