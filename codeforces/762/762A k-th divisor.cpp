/*
    author    : MishkatIT
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int n, k;
    cin >> n >> k;
    set<int> s;
    for (int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            s.insert(i);
            s.insert(n / i);
        }
    }
    int cnt = 0;
    for (auto& i: s)
    {
        cnt++;
        if(cnt == k)
        {
            cout << i;
            return 0;
        }
    }
    cout << -1;
    return 0;
}

