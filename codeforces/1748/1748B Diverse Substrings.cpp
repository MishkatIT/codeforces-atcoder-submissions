/*
    author    : MishkatIT
    created   : Friday 2022-11-18-14.28.47
    problem   : 1748 B. Diverse Substrings
*/
#include<iostream>
#include<map>
#include<algorithm>
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
        string str;
        cin >> str;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            map<char, int> mp;
            int mxf = 0;
            for (int j = i; j < n && 100; j++)
            {
                mp[str[j]]++;
                mxf = max (mxf, mp[str[j]]);
                if(mxf <= mp.size())
                    ans++;
                if(mxf > 10)
                    break;
            }
        }
        cout << ans << '\n';

    }

    return 0;
}



