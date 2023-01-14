/*
    author    : MishkatIT
    created   : Saturday 2023-01-14-17.02.25
    problem   : 1703 D. Double Strings
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
        vector<string> v(n);
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        for (int i = 0; i < n; i++)
        {
            bool ok = false;
            for (int j = 1; j < v[i].length(); j++)
            {
                if(mp[v[i].substr(0, j)] && mp[v[i].substr(j)])
                {
                    ok = true;
                    break;
                }
            }

            cout << ok;
        }
        cout << '\n';
    }
    return 0;
}
