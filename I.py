n = int(input())
s = input()
s = s.replace('0', '').replace('1', '')
lst = ['', '', '2', '3', '322', '5', '53', '7', '2227', '7332']
 
res = ""
 
for i in s:
    res += lst[int(i)]
 
print(''.join(sorted(res, reverse=True)))