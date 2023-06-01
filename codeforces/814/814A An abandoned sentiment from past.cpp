/*
    author    : MishkatIT
    created   : Thursday 2023-06-01-13.11.09
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto& i: a) cin >> i;
    for (auto& i: b) cin >> i;

    sort(b.rbegin(), b.rend());
    for(int j = 0, i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            a[i] = b[j++];
        }
    }
    if(is_sorted(a.begin(), a.end()))
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
    return 0;
}

