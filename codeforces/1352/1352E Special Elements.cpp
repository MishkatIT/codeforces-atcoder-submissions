/*
    author    : MishkatIT
    created   : Thursday 2023-03-23-00.28.48
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
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
        vector<int>v(n), occur(n + 10);
        for (auto &i : v)
        {
            cin >> i;
            occur[i]++;
        }
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            int sum = v[i];
            for (int j = i + 1; j < n; j++)
            {
                sum += v[j];
                if(sum <= n)
                {
                    ans += occur[sum];
                    occur[sum] = 0;
                }
                else break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}

