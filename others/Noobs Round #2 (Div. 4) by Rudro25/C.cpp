/*
    author    : MishkatIT
    created   : Wednesday 2023-05-03-23.54.03
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
        int n, k;
        cin >> n >> k;
        vector<int>v(n);
        for (auto &i : v)
        {
            cin >> i;
        }
        int ans = 0;
        int x = 0;
        sort(v.begin(), v.end());

        for (int i = n - 1; i >= x; i--)
        {
            while(v[i] + v[x] < k && x < i)
                x++;
            if(v[i] >= k)
                ans++;
            else if(v[i] + v[x] >= k && x != i)
                ans++, x++;
        }
        cout << ans << '\n';
    }
    return 0;
}