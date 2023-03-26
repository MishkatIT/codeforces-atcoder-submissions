/*
    author    : MishkatIT
    created   : Monday 2023-03-27-02.11.46
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
typedef long long ll;
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<ll>v(n), pos, neg;
        for (auto &i : v)
        {
            cin >> i;
            if(i <= 0)
                neg.push_back(i);
            else
                pos.push_back(i);
        }
        ll constant = (*max_element(v.begin(), v.end()) - *min_element(v.begin(), v.end()));
        if(constant <= 0)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
            sort(pos.rbegin(), pos.rend());
            sort(neg.rbegin(), neg.rend());
            vector<ll> ans;
            ll sum = 0;
            for (int i = 0; i < (int)pos.size(); i++)
            {
                if(sum + pos[i] >= constant)
                {
                    while(sum + pos[i] >= constant)
                    {
                        sum += neg.back();
                        ans.push_back(neg.back());
                        neg.pop_back();
                    }
                }
                sum += pos[i];
                ans.push_back(pos[i]);
            }
            for(auto &i : neg)
            {
                ans.push_back(i);
            }
            for(auto &i : ans)
                cout << i << ' ';
            cout << '\n';
        }
    }
    return 0;
}

