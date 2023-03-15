t = int(input())
while t:
    t -= 1
    lst = list(map(int, input().split()))
    a = lst[0]
    b = lst[1]
    a = abs(a)
    b = abs(b)
    if a < b:
        a, b = b, a
    print(a + b + max(0, a - b - 1))
