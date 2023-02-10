/*
    author    : MishkatIT
    created   : Saturday 2023-02-11-00.10.13
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
        int n;
        cin >> n;
        vector<pair<int, int>> v;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.emplace_back(temp, i + 1);
        }
        sort(v.begin(), v.end());
        int mn = min(v.front().second, v.back().second);
        int mx = max(v.front().second, v.back().second);
        cout << min(mx, min(n - mn + 1, mn + n - mx + 1)) << '\n';
        // minimum of right traverse, left traverse, distance from left + distance from right;
    }
    return 0;
}
