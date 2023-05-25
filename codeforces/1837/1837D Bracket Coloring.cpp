/*
    author    : MishkatIT
    created   : Friday 2023-05-26-00.13.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int rbs = 0;
        for (auto& i: str)
        {
            if(i == '(')
                rbs++;
            else
                rbs--;
        }
        if(rbs != 0)
        {
            cout << -1 << '\n';
            continue;
        }
        stack<int> s;
        vector<int> ans(n, 0);
        int x = 1, a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if(str[i] == '(')
                s.push(i);
            else if(!(s.empty()) && str[i] == ')')
            {
                ans[i] = 1;
                ans[s.top()] = 1;
                s.pop();
                x = 2;
                a = 1;
            }
        }
        for(auto &i : ans)
        {
            if(i == 0)
            {
                i = x;
                b = 1;
            }
        }
        bool ok = true;
        if(a + b == 2)
        {
            int cur = 0;
            for(auto& i: str)
            {
                if(i == ')')
                    cur++;
                else if(cur)
                    cur--;
                else
                {
                    ok = false;
                    break;
                }
            }
        }
        if(ok)
        {
            cout << 1 << '\n';
            for(int i = 0; i < n; i++)
                cout << 1 << " \n"[i == n - 1];
            continue;
        }
        cout << a + b << '\n';
        for (int i = 0; i < n; i++)
            cout << ans[i] << " \n"[i == n - 1];
    }
    return 0;
}
