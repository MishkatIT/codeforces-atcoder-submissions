/*
    author    : MishkatIT
    created   : Thursday 2023-01-12-01.26.46
    problem   : A. Worms Evolution
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    map<int, pair<int, int>>mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            mp[arr[i] + arr[j]] = {i, j};
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(mp.find(arr[i]) != mp.end())
        {

            cout << i + 1 << ' ' << ++mp[arr[i]].first << ' ' << ++mp[arr[i]].second;
            return 0;
        }
    }
    cout << -1;
    return 0;
}

