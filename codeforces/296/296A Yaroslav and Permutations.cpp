/*
    author    : MishkatIT
    created   : Monday 2022-12-12-01.59.37
    problem   : 296 A. Yaroslav and Permutations
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int a;
    map<int, int> mp;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        mp[a]++;
        mx = max(mx, mp[a]);
    }
    bool ok = true;
    if(mx > ceil(n / 2.00))
        ok = false;
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}

