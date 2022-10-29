/*
    author    : MishkatIT
    created   : Saturday 2022-10-29-20.41.25
    problem   : 1559 B. Mocha and Red and Blue
*/
#include<iostream>
#include<string>
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
        string str;
        cin >> str;
        int q = count(str.begin(), str.end(), '?');
        if(q == n)
        {
            for(int i = 0; q > 0; i++)
            {
                cout << 'B';
                q--;
                if(q)
                {
                    cout << 'R';
                    q--;
                }
            }
            cout << '\n';
            continue;
        }

        for(int i = 0; q > 0; i++ )
        {
            if(str[i] == 'R' or str[i] == 'B')
            {
                if((i + 1) < n and str[i+1] == '?' )
                {
                    str[i+1] = (str[i] == 'B' ? 'R' : 'B');
                    q--;
                }
                if((i - 1) >= 0 and str[i-1] == '?')
                {
                    str[i-1] = (str[i] == 'B' ? 'R' : 'B');
                    q--;
                }
                if(i == n-1 and q > 0)
                    i = 0;
            }
        }

        cout << str << '\n';

    }

    return 0;
}


