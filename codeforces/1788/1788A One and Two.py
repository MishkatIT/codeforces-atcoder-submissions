t = int(input())
arr = []
for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    ans = -1
    temp = 1
    for i in arr:
        temp = temp * i
    x = 1
    for i in range(0, n - 1):
        temp = temp / arr[i]
        x = x * arr[i]
        if temp == x:
            ans = i + 1
            break
    print(ans)

