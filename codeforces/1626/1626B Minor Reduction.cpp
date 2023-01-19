/*
    author    : MishkatIT
    created   : Wednesday 2023-01-18-01.53.10
    problem   : 1626 B. Minor Reduction
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
        string str;
        cin >> str;
        int len = str.length();
        bool ok = false;
        for (int i = len - 1; i >= 0; i--)
        {
            int sum = str[i] + str[i - 1] - 2 * '0';
            if(sum >= 10)
            {
                ok = true;
                cout << str.substr(0, i - 1) << sum << str.substr(i + 1) << '\n';
                break;
            }
        }
        if(!ok)
            cout << str[0] + str[1] - 2 * '0' << str.substr(2) << '\n';
    }
    return 0;
}

