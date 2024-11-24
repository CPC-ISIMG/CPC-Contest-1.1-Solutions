a, b = map(int, input().split())
j = 0
while a <= b:
    a *= 3
    b *= 2
    j += 1
print(j)
