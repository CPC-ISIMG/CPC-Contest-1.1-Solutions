a = list(map(int, input().split()))
a.sort()
print(f"{a[3]-a[1]} {a[3]-a[2]} {a[3]-a[0]}")