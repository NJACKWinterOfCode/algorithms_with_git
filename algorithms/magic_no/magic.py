sum = 0

n = int(input())
temp = n

while temp > 0 or sum > 9:
    if temp == 0:
        temp = sum
        sum = 0
    d = temp % 10
    sum = sum + d
    temp = temp // 10

if sum == 1:
    print(n, "is a MAGIC number")
else:
    print(n, "is NOT a MAGIC number")
