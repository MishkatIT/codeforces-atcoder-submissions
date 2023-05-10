/*
    author    : MishkatIT
    created   : Wednesday 2023-05-10-22.32.05
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        ll n, x;
        cin >> n >> x;
        deque<pair<int, int>> dq;
        bool ok = true;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if(ok)
            {
                if(temp % x == 0)
                {
                    sum += temp;
                    dq.push_back({temp / x, x});
                }
                else
                {
                    sum += temp;
                    ok = false;
                }
            }
            else
                sum += temp;
        }
        while(ok)
        {
            if(dq[0].first % x == 0)
            {
                sum += dq[0].first * dq[0].second;
                dq.push_back({dq[0].first / x, dq[0].second * x});
                dq.erase(dq.begin());
            }
            else
                ok = false;
        }
        for (auto& i: dq)
            sum += i.first * i.second;
        cout << sum << '\n';
    }
    return 0;
}
