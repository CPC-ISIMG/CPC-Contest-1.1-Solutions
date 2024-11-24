import math

n, k = map(int, input().split())

divisors = []

for i in range(1, int(math.sqrt(n)) + 1):
    if n % i == 0:
        divisors.append(i)
        if i != n // i:
            divisors.append(n // i)

divisors.sort()

if k <= len(divisors):
    print(divisors[k - 1]) 
else:
    print(-1)
