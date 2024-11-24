n, m = map(int, input().split())
d = m // n
cnt = 0

if m % n != 0:
    cnt = -1
else:
    while d != 1:
        if d % 2 == 0:
            d //= 2
            cnt += 1
        elif d % 3 == 0:
            d //= 3
            cnt += 1
        else:
            cnt = -1
            break

print(cnt)
