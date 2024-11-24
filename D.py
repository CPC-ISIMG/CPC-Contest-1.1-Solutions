for _ in range(int(input())):
    str1 = input()
    str2 = input()
    len_str1 = len(str1)
    sorted_str1 = sorted(str1)
    find = False

    for i in range(0, len(str2) - len_str1 + 1):
        temp = sorted(str2[i:i+len_str1])
        if temp == sorted_str1:
            find = True
            break

    if find:
        print("YES")
    else:
        print("NO")
