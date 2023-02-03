/*
    author    : MishkatIT
    created   : Friday 2023-02-03-20.57.00
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, i;
        cin >> n;
        string str;
        cin >> str;
        set<char> s;
        vector<int> pre(n);
        for (int i = 0; i < n; i++)
        {
            s.insert(str[i]);
            pre[i] = (int)s.size();
        }
        s.clear();
        vector<int> suf(n);
        for (int i = n - 1; i >= 0; i--)
        {
            s.insert(str[i]);
            suf[i] = (int)s.size();
        }
        int ans = 0;
        for (int i = 0; i < n - 1; i++)
        {
            ans = max(ans, pre[i] + suf[i + 1]);
        }
        cout << ans << '\n';

    }
    return 0;
}

