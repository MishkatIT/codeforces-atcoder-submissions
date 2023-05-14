/*
    author    : MishkatIT
    created   : Sunday 2023-05-14-17.08.45
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
        int n;
        cin >> n;
        vector<int>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        int one = count(v.begin(), v.end(), 1);
        int zero = count(v.begin(), v.end(), 0);
        int x;
        if(zero >= one)
            x = 0;
        else
            x = 1;
        int cnt = 0;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if(v[i] == x)
                ans.push_back(x), cnt++;
            if(cnt >= n / 2)
            {
                if(x == 1)
                {
                    if((int)ans.size() % 2 == 0)break;
                }
                else break;
            }
        }
        int sz = ans.size();
        cout << sz << '\n';
        for (int i = 0; i < sz; i++)
            cout << ans[i] << " \n"[i == sz - 1];
    }
    return 0;
}
