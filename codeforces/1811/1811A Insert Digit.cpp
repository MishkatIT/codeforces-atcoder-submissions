/*
    author    : MishkatIT
    created   : Tuesday 2023-04-04-20.34.32
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
        int n;
        char d;
        cin >> n >> d;
        string str;
        cin >> str;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if(str[i] < d)
            {
                str.insert(str.begin() + i, d);
                ok = true;
                break;
            }
        }
        if(!ok)
            str += d;
        cout << str << '\n';

    }
    return 0;
}

