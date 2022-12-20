/*
    author    : MishkatIT
    created   : Tuesday 2022-12-20-21.29.16
    problem   : C. Two Shuffled Sequences
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    int temp;
    map<int, int> mp;
    bool ok = true;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        mp[temp]++;
        if(mp[temp] > 2)
        {
            ok = false;
        }
    }
    if(ok)
    {
        vector<int> inc;
        for (auto& i: mp)
        {
            if(i.second)
            {
                inc.push_back(i.first);
                i.second--;
            }
        }
        vector<int> dec;
        for (auto i = mp.rbegin(); i != mp.rend(); i++)
        {
            if(i -> second)
            {
                dec.push_back(i -> first);
                i -> second--;
            }
        }
        cout << "YES" << '\n';
        cout << inc.size() << '\n';
        for(auto& i: inc)
            {
                cout << i << ' ';
            }
        cout << '\n';
        cout << dec.size() << '\n';
        for (auto& i: dec)
            {
                cout << i << ' ';
            }
        cout << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    return 0;
}

