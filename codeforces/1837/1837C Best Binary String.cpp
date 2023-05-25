/*
    author    : MishkatIT
    created   : Thursday 2023-05-25-21.43.23
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        char x = '0';
        for(int i = 0; i < str.length(); i++)
        {
            if(str[i] == '?')
                str[i] = x;
            else
                x = str[i];
        }
        cout << str << '\n';
    }
    return 0;
}
