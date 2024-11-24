n, k = map(int, input().split())
v = list(map(int, input().split()))

minAnsIndex = 0
sum_val = sum(v[:k])

minRes = sum_val
res = sum_val

for i in range(1, n - k + 1):
    res = res - v[i - 1] + v[i + k - 1]
    if res < minRes:
        minRes = res
        minAnsIndex = i

print(minAnsIndex + 1)
