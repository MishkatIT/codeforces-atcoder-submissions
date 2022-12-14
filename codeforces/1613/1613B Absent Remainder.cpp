/*
    author    : MishkatIT
    created   : Wednesday 2022-12-14-21.45.58
    problem   : B. Absent Remainder
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
        vector<int> v(n);
        for (auto &i: v)
            cin >> i;
        sort(v.begin(), v.end());
        for (int i = 1; i <= n/2; i++)
            cout << v[i] << ' ' << v[0] << '\n';
    }
    return 0;
}
