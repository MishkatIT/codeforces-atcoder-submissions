/*
    author    : MishkatIT
    created   : Tuesday 2023-02-07-21.24.31
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

bool isPermutation(int n, vector<int> &v)
{
    set<int> initial;
    for (int i = 0; i < n; i++)
    {
        initial.insert(v[i]);
    }
//    cout << "ii" << *initial.rbegin() << '\n';
    if((int)initial.size() != n || *initial.rbegin() != n)
    {
        return false;
    }
    set<int> terminal;
    int x = (int)v.size() - n;
    for (int i = n; i < (int)v.size(); i++)
    {
        terminal.insert(v[i]);
    }
    if((int)terminal.size() != x || *terminal.rbegin() != x)
    {
        return false;
    }
    return true;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int mx = -1;
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        set<pair<int, int>> pairs;
        if(isPermutation(mx, v))
        {
            pairs.insert({mx, n - mx});
        }
        if(isPermutation(n - mx, v))
        {
            pairs.insert({n - mx, mx});
        }
        cout << (int) pairs.size() << '\n';
        for(auto& i: pairs)
        {
            cout << i.first << ' ' << i.second << '\n';
        }

    }
    return 0;
}
