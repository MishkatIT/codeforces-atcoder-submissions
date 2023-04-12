/*
    author    : MishkatIT
    created   : Wednesday 2023-04-12-06.58.45
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int x = 0;
        vector<bool> oc(26, false);
        for(auto &i : str)
        {
            if(oc[i - 'a'])
            {
                x += 2;
                oc = vector<bool>(26, false);
            }
            else
            {
                oc[i - 'a'] = true;
            }
        }
        cout << (int)str.length() - x << '\n';
    }
    return 0;
}

