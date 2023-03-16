#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        a = abs(a);
        b = abs(b);
        if(a < b)
        {
            a += b;
            b = a - b;
            a = a - b;
        }
        int ans = a + b;
        if(a - b - 1 > 0)
            ans += a - b - 1;
        printf("%d\n", ans);
    }
}
