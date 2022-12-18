/*
    author    : MishkatIT
    created   : Sunday 2022-12-18-20.47.37
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
        vector<int> v;
        int x;
        for (int i = 0; i < 4; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        bool ok = false;
        for(int i = 0; i < 4; i++)
        {
            if((v[0] < v[1] && v[2] < v[3]) && (v[0] < v[2] && v[1] < v[3]))
            {
                ok = true;
                break;
            }
            else
            {
                vector<int> t(4);
                t[0] = v[2];
                t[1] = v[0];
                t[2] = v[3];
                t[3] = v[1];
                v = t;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}
