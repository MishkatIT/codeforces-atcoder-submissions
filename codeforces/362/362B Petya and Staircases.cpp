/*
    author    : MishkatIT
    created   : Sunday 2023-05-07-20.13.24
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;

    int n, m;
    cin >> n >> m;
    vector<int> v(m + 1);
    for (int i = 1; i <= m; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int cnt = 0;
    bool ok = true;
    if(v[1] == 1 || v.back() == n) ok = false;
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
        if(!ok)
            break;
        if(v[x] == i)
            cnt++, x++;
        else
            cnt = 0;
        if(cnt > 2)
            ok = false;
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}

