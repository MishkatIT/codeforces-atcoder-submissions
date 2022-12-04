/*
    author    : MishkatIT
    created   : Monday 2022-12-05-02.45.45
    problem   : A. Computer Game
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
        string sa, sb;
        cin >> sa >> sb;
        for (int i = 0; i < n; i++)
        {
            if(sa[i] != '0')
                swap(sa[i], sb[i]);
        }
        bool ok = true;
        for (auto i: sa)
        {
            if(i == '1')
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
