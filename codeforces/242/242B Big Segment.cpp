/*
    author    : MishkatIT
    created   : Thursday 2023-04-27-19.45.23
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
    int l = INT_MAX, r = INT_MIN;
    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        l = min(l, x);
        r = max(r, y);
        mp[ {x, y}] = i + 1;
    }
    int x = mp[ {l, r}];
    if(x)
        cout << x << '\n';
    else
        cout << -1 << '\n';
    return 0;
}
