/*
    author    : MishkatIT
    created   : Sunday 2022-12-04-19.33.43
    problem   : 1263 C. Everyone is a Winner!
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
        set<int> s;
        s.insert(0);
        for(int i = 1; i * i <= n; i++)
        {
            s.insert(i);
            s.insert(n / i);
        }
        cout << s.size() << '\n';
        for(auto i: s)
            cout << i << ' ';
        cout << '\n';
    }
    return 0;
}

