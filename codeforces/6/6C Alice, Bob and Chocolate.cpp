/*
    author    : MishkatIT
    created   : Thursday 2023-04-13-18.57.20
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
    vector<int>v(n);
    for (auto &i : v)
    {
        cin >> i;
    }
    int l = 0, r = n - 1;
    int a = 0, b = 0;
    while(l <= r)
    {
        if(a + v[l] <= b + v[r])
        {
            a += v[l];
            l++;
        }
        else
        {
            b += v[r];
            r--;
        }
    }
    cout << l << ' ' << n - l << '\n';
    return 0;
}
