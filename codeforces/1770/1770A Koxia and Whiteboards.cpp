/*
    author    : MishkatIT
    problem   : A. Koxia and Whiteboards
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
signed main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        n--;
        int sz = (n + m);
        vector<int> v(sz);
        for (auto& i: v)
            cin >> i;
        sort(v.rbegin(), v.rend());
        int sum;
        cin >> sum;
        for (int i = 0; i < n; i++)
            sum += v[i];
        cout << sum << '\n';
    }
    return 0;
}
