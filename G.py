a, b, c, d = map(float, input().split())

res = 0
smallR = a / b
missedByTheTwo = (1 - a / b) * (1 - c / d)

for _ in range(100000):
    res += smallR
    smallR *= missedByTheTwo

print(f"{res:.12f}")
