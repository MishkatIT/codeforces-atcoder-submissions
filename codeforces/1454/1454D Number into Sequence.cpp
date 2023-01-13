/*
    author    : MishkatIT
    created   : Friday 2023-01-13-18.02.38
    problem   : D. Number into Sequence
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void primeFact(long long n)
{
    vector<pair<long long, long long>> v;
    for (long long i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            long long cnt = 0;
            while(n % i == 0)
            {
                n /= i;
                cnt++;
            }
            v.push_back({cnt, i});
        }
    }
    if(n > 1)
        v.push_back({1, n});
    sort(v.rbegin(), v.rend());
    vector<long long> ans(v[0].first, v[0].second);
    for (int i = 1; i < (int)v.size(); i++)
    {
        ans.back() *= (pow(v[i].second, v[i].first));
    }
    cout << (int) ans.size() << '\n';
    for (auto& i: ans)
        cout << i << ' ';
    cout << '\n';
    return;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        primeFact(n);
    }
    return 0;
}
