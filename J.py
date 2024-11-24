for _ in range(int(input())):
    n = int(input())
    string = input()
    s = set()
    for i in string:
        s.add(i)
 
    list_s = list(s)
    list_s.sort()
 
    mp = {}
    left = 0
    right = len(list_s) - 1
 
    while left < right:
        mp[list_s[left]] = list_s[right]
        mp[list_s[right]] = list_s[left]
        left += 1
        right -= 1
 
    if left == right:
        mp[list_s[left]] = list_s[left]
 
    res = ""
    for i in string:
        res += mp[i]
 
    print(res)