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
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];
        int sum = b.back();
        b.pop_back();
//        a.erase(a.begin());
        n--;
        m--;
        for (auto& i: b)
            a.push_back(i);
        sort(a.rbegin(), a.rend());
        for (int i = 0; i < n; i++)
            sum += a[i];
        cout << sum << '\n';
    }
    return 0;
}
