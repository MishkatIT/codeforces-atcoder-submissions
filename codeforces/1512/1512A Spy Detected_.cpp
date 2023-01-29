/*
    author    : MishkatIT
    created   : Monday 2023-01-30-00.34.46
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, temp;
        cin >> n;
        map<int, pair<int, int>> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            mp[temp].first++;
            mp[temp].second = i + 1;
        }
        for (auto& i: mp)
        {
            if(i.second.first == 1)
            {
                cout << i.second.second << '\n';
                break;
            }
        }
    }
    return 0;
}
