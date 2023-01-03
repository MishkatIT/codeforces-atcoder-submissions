t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    ans = 0
    for j in range(1, n):
        ans = max(ans, arr[j] * arr[j - 1])
    print(ans)
