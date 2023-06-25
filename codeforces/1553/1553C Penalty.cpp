/*
    author    : MishkatIT
    created   : Sunday 2023-06-25-21.47.27
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

int func(int sl, string str)
{
    int f = 0, s = 0;
    for(int i = 1; i <= 10; i++)
    {
        if(i & 1)
        {

            if(s + (10 - i + 1) / 2 >= f)
            {
                if(str[i] == '?')
                    f += (sl == 1);
                else
                    f += (str[i] - '0');
            }
            else
                return i - 1;
            if(s + (10 - i + 1) / 2 < f) return i;

        }
        else
        {
            if(f + (10 - i) / 2 >= s)
            {
                if(str[i] == '?')
                    s += !(sl == 1);
                else
                    s += (str[i] - '0');
            }
            else
                return i - 1;
            if(f + (10 - i) / 2 < s) return i;

        }
    }
    return 10;
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        str = "#" + str;
        cout << min(func(1, str), func(2, str)) << '\n';
    }
    return 0;
}

