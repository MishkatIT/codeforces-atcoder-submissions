/*
    author    : MishkatIT
    created   : Tuesday 2023-06-27-16.12.44
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string str;
    cin >> str;
    char x, y, z;
    x = y = z = 'a';
    bool ok = false;
    for (char i = 'a' - 1; i <= 'z'; i++)
    {
        for (char j = 'a' - 1; j <= 'z'; j++)
        {
            for (char k = 'a'; k <= 'z'; k++)
            {
                string temp;
                if (i != 'a' - 1) temp += i;
                if(j != 'a' - 1) temp += j;
                temp += k;
                if(str.find(temp) == string::npos)
                {
                    cout << temp << '\n';
                    return;
                }
            }
        }
    }
}

int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
