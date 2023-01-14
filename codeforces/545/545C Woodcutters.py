l = []
r = []
n = int(input())
for i in range(n):
    x, h = map(int, input().split())
    l.append(x)
    r.append(h)
ans = 0
for i in range(1, n - 1):
    if r[i] < l[i] - l[i - 1]:
        ans += 1
    elif r[i] < l[i + 1] - l[i]:
        ans += 1
        l[i] += r[i]
if n == 1:
    ans += 1
else:
    ans += 2
print(ans)
