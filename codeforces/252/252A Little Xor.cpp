/*
    author    : MishkatIT
    created   : Friday 2023-04-14-19.33.12
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int>v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int x = 0;
        for (int j = i; j < n; j++)
        {
            x ^= v[j];
            ans = max(ans, x);
        }
    }
    cout << ans;
    return 0;
}
