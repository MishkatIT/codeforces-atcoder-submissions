/*
    author    : MishkatIT
    created   : Friday 2023-05-19-20.34.51
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
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
        map<string, bool> mp;
        for (int i = 0; i + 1 < n; i++)
        {
            string temp = "xx";
            temp[0] = str[i];
            temp[1] = str[i + 1];
            if(!mp[temp])
            {
                ans++;
                mp[temp] = true;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
