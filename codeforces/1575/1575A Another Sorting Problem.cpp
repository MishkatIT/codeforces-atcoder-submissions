/*
    author    : MishkatIT
    created   : Friday 2023-05-05-16.56.21
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int n, m;

bool srt(const string& a, const string& b)
{
    for (int i = 0; i < m; i++)
    {
        if (i % 2 == 0)
        {
            if (a[i] != b[i])
                return a[i] < b[i];
        }
        else
        {
            if (a[i] != b[i])
                return a[i] > b[i];
        }
    }
    return false;
}

int main()
{
    fio;
    cin >> n >> m;
    vector<string> v(n);
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]] = i + 1;
    }
    sort(v.begin(), v.end(), srt);
    for (int i = 0; i < n; i++)
        cout << mp[v[i]] << ' ';

    return 0;
}
