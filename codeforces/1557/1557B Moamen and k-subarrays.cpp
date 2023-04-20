/*
    author    : MishkatIT
    created   : Thursday 2023-04-20-13.26.42
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        vector<pair<int, int>> v(n), sorted(n);
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v[i] = {x, i};
            sorted[i] = {x, i};
        }
        sort(sorted.begin(), sorted.end());
        int ans = n;
        for (int i = 0; i + 1 < n; i++)
        {
            if(sorted[i].second + 1 == sorted[i + 1].second)
                ans--;
        }
        if(ans <= k)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}

