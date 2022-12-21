/*
    author    : MishkatIT
    created   : Wednesday 2022-12-21-18.17.45
    problem   : A. 2048 Game
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
        int n;
        cin >> n;
        map<int, int> mp;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp <= 2048)
            {
                mp[temp]++;
            }
        }
        bool ok = false;
        for (auto& i: mp)
        {
            mp[i.first * 2] += (i.second / 2);
//            cout << i.second << '\n';
            if(mp[2048])
            {
                ok = true;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

