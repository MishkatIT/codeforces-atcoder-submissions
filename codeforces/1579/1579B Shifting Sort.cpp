/*
    author    : MishkatIT
    created   : Wednesday 2023-05-24-15.23.17
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
        deque<int> v(n);
        for(auto& i: v)
        {
            cin >> i;
        }
        deque<int> srt = v;
        sort(srt.begin(), srt.end());
        deque<int> ans;
        for (int i = 0; i < n; i++)
        {
            int l = i, r = i;
            while(r - 1 < n)
            {
                if(v[r] != srt[i])r++;
                else break;
            }
            if(r != l)
            {
                ans.push_back(l + 1);
                ans.push_back(r + 1);
                ans.push_back(r - l);
            }
            v.insert(v.begin() + i, v[r]);
            v.erase(v.begin() + r + 1);
        }
        int sz = ans.size();
        cout << sz / 3 << '\n';
        for (int i = 0; i < sz; i++)
        {
            cout << ans[i] << " \n"[(i % 3) == 2];
        }
    }
    return 0;
}

