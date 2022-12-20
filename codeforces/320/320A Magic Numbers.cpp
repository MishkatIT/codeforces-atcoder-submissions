/*
    author    : MishkatIT
    created   : Wednesday 2022-12-21-04.29.01
    problem   : A. Magic Numbers
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    cin >> str;
    bool one = false;
    bool ok = true;
    int four = 0;
    for (auto& i: str)
    {
        if (i == '1')
        {
            one = true;
            four = 0;
        }
        else if (i == '4')
        {
            if(!one)
            {
                ok = false;
                break;
            }
            else
            {
                four++;
                if (four > 2)
                {
                    ok = false;
                    break;
                }
            }
        }
        else
        {
            ok = false;
            break;
        }
    }
    cout << (ok ? "YES" : "NO") << '\n';
    return 0;
}

