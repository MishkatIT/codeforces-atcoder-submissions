/*
    author    : MishkatIT
    created   : Wednesday 2022-12-28-22.54.08
    problem   : B. Polycarp and Letters
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    string str;
    cin >> str;
    unordered_set<char> s;
    int mx = 0;
    for (auto& i: str)
    {
        if(i <= 90)
        {
            mx = max (mx, (int)s.size());
            s.clear();
        }
        else
            s.insert(i);
    }
    mx = max (mx, (int)s.size());
    cout << mx;
    return 0;
}

