/*
    author    : MishkatIT
    created   : Wednesday 2023-05-03-23.27.08
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
        cin >> n;
        string str;
        cin >> str;
        long long s = 0;
        for(auto &i: str)
        {
            if(i == '0')
                s += 90;
            else
                s -= 90;
        }
        s %= 360;
        if(s == 90 || s == -270)
            cout << 'S' << '\n';
        else if(abs(s) == 180)
            cout << 'W' << '\n';
        else if(s == -90 || s == 270)
            cout << 'N' << '\n';
        else
            cout << 'E' << '\n';
    }
    return 0;
}