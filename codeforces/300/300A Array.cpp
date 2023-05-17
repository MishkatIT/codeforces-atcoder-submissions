/*
    author    : MishkatIT
    created   : Wednesday 2023-05-17-18.57.38
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<int>v(n);
    bool pos = false;
    for (auto &i : v)
    {
        cin >> i;
        pos |= i > 0;
    }
    int l = 0, r = n;
    sort(v.begin(), v.end());
    cout << "1 " << v.front() << '\n', l++;
    if(pos)
        cout << "1 " << v.back() << '\n', r--;
    else
        cout << "2 " << v[1] << ' ' << v[2] << '\n', l += 2;
    cout << (r - l) << ' ';
    while(l < r)
    {
        cout << v[l++] << ' ';
    }
    return 0;
}
