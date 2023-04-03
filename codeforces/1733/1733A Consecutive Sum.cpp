/*
    author    : MishkatIT
    created   : Tuesday 2023-04-04-05.29.13
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
        vector<int>v(k);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i % k] = max(v[i % k], x);
        }
        cout << accumulate(v.begin(), v.end(), 0ll) << '\n';
    }
    return 0;
}
