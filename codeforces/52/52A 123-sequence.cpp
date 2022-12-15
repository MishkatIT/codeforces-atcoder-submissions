/*
    author    : MishkatIT
    created   : Friday 2022-12-16-05.38.36
    problem   : A. 123-sequence.cpp
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int x;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x]++;
    }
    vector<int>v;
    for (auto &i: mp)
        v.push_back(i.second);
    sort(v.begin(), v.end());
    int ans = 0;
    for (int i = 0; i < v.size() - 1; i++)
        ans += v[i];
    cout << ans;
    return 0;
}

