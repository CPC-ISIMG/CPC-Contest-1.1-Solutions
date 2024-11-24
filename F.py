ii, jj = 0, 0
for i in range(5):
    row = list(map(int, input().split()))
    for j in range(5):
        if row[j] == 1:
            ii, jj = i + 1, j + 1  
            break

print(abs(3 - ii) + abs(3 - jj))
