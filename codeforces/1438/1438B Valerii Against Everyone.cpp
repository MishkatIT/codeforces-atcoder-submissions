/*
    author    : MishkatIT
    created   : Wednesday 2022-12-21-03.22.48
    problem   : B. Valerii Against Everyone
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
        unordered_set<int> s;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            s.insert(temp);
        }
        bool ok = true;
        if(s.size() == n)
            ok = false;
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}

