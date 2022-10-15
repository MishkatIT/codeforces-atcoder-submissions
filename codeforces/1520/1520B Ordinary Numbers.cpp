/*
    author    : MishkatIT
    created   : Sunday 2022-10-16-04.19.21
    problem   : 1520 B. Ordinary Numbers
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
// checking the number, ordinary or not...
int solve(int n)
{
    int ans = 0;
    for (int tmp = 1; tmp <= n; ans++)
    {
        tmp = tmp/(tmp%10) * (tmp%10 + 1);
        if (tmp % 10 == 0)
            tmp++;
    }
    return ans;
}
int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << solve(n) << '\n';
    }
}


