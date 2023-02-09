/*
    author    : MishkatIT
    created   : Friday 2023-02-10-01.02.25
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
        int n;
        cin >> n;
        string str = to_string(n);
        int a = 0, b = 0;
        int last = 1;
        for (int i = 0; i < str.length(); i++)
        {
            int temp = str[i] - '0';
            a *= 10;
            b *= 10;
            if(temp & 1)
            {
                if(last)
                {
                    a += temp / 2 + 1;
                    b += temp / 2;
                }
                else
                {
                    a += temp / 2;
                    b += temp / 2 + 1;
                }
                last ^= 1;
            }
            else
            {
                temp /= 2;
                a += temp;
                b += temp;
            }
        }
        cout << a << ' ' << b << '\n';
    }
    return 0;
}
