/*
    author    : MishkatIT
    created   : Sunday 2023-05-21-16.47.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int k, n, m;
        cin >> k >> n >> m;

        vector<int>a(n);
        for (auto& x: a)
        {
            cin >> x;
        }

        vector<int>b(m);
        for (auto& x: b)
        {
            cin >> x;
        }

        int i = 0, j = 0;
        vector<int> ans;
        int tot = k;
        while(true)
        {
            if(i < n && a[i] == 0)
            {
                ans.push_back(a[i++]);
                k++;
            }
            else if(i < n && a[i] > 0 && k >= a[i])
            {
                ans.push_back(a[i++]);
            }
            else if(j < m && b[j] == 0)
            {
                ans.push_back(b[j++]);
                k++;
            }
            else if(j < m && b[j] > 0 && k >= b[j])
            {
                ans.push_back(b[j++]);
            }
            else
                break;
        }
        if(ans.size() == n + m)
        {
            for (int i = 0; i < (n + m); i++)
                cout << ans[i] << " \n"[i == (n + m) - 1];
        }
        else
            cout << -1 << '\n';
    }
    return 0;
}

