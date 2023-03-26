/*
    author    : MishkatIT
    created   : Sunday 2023-03-26-19.02.45
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
    vector<int>v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    sort(v.begin(), v.end());
    int temp;
    for (int i = 0; i < m; i++)
    {
        cin >> temp;
        int x = upper_bound(v.begin(), v.end(), temp) - v.begin();
        cout << x << ' ';
    }
    return 0;
}

