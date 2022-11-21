/*
    author    : MishkatIT
    created   : Monday 2022-11-21-17.34.00
    problem   : 1744 C. Traffic Light
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        char c;
        cin >> c;
        string str;
        cin >> str;
        str += str;
        n *= 2;
        int mx = 0;
        for(int i = 0; i < n; i++)
        {
            int cnt = 0;
            if(str[i] == c)
                while(str[i] != 'g')
                {
                    if(i == n)
                        break;
                    cnt++;
                    i++;
                }
            mx = max(mx, cnt);
        }
        cout << mx << '\n';
    }
    return 0;
}



