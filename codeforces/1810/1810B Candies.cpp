/*
    author    : MishkatIT
    created   : Friday 2023-03-31-21.39.42
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
#define int long long
void LesGo (void)
{
    int n;
    cin >> n;
    if(!(n & 1))
    {
        cout << -1 << '\n';
        return;
    }
    int mx = 40;
    deque<int> dq;
    while(n != 1)
    {
        mx--;
        if(mx < 0)
        {
            cout << -1 << '\n';
            return;
        }
        if(((n + 1) / 2) & 1)
        {
            n++;
            n /= 2;
            dq.push_front(1);
        }
        else
        {
            n--;
            n /= 2;
            dq.push_front(2);
        }
    }
    if(n == 1)
    {
        cout << (int)dq.size() << '\n';
        for(auto &i : dq)
            cout << i << ' ';
        cout << '\n';
    }
    else
    {
        cout << -1 << '\n';
    }
    return;
}

signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
        LesGo();
    return 0;
}
