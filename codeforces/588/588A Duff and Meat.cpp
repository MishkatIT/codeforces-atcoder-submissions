/*
    author    : MishkatIT
    created   : Friday 2022-12-16-04.30.39
    problem   : A. Duff and Meat
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    vector<pair<long long, long long>> v;
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        v.emplace_back(a, b);
    }

    long long mn = LONG_MAX;
    long long ans = 0;
    for(auto &i: v)
    {
        if(i.second < mn)
            mn = i.second;
        ans += (i.first * mn);
    }
    cout << ans;

    return 0;
}

