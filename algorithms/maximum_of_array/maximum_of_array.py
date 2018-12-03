import sys

n = int(input())
arr = [int(x) for x in input().split()]
max = -sys.maxsize
for i in range(0,n):
    if arr[i] > max:
        max = arr[i]
print(max)

