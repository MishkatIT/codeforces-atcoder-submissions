/*
    author    : MishkatIT
    created   : Saturday 2023-06-17-01.44.50
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
        int n;
        cin >> n;
        string str;
        cin >> str;
        string a, b;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            string x;
            if(str[i] != '1')
            {
                if(str[i] == '0')
                {
                    a += "0";
                    b += "0";
                }
                else
                {
                    if(found)
                    {
                        a += "0";
                        b += "2";
                    }
                    else
                    {
                        a += "1";
                        b += "1";
                    }
                }
            }
            else
            {
                if(found)
                {
                    a += "0";
                    b += "1";
                }
                else
                {
                    a += "1";
                    b += "0";
                }
                found = true;
            }
        }
        cout << a  << '\n' << b << '\n';
    }
    return 0;
}

