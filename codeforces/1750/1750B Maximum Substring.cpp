/*
    author    : MishkatIT
    created   : Sunday 2022-11-06-21.10.37
    problem   : 1750 B. Maximum Substring
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
        long long n, mxo = 0, mxz = 0, i, cnt;
        cin >> n;
        string str;
        cin >> str;
        for (i = 0, cnt = 0; i < n; i++)
        {
            if(str[i] == '1')
                cnt++;
            else
            {
                mxo = max(mxo, cnt);
                cnt = 0;
            }
        }
        mxo = max(mxo, cnt);
        cnt = 0;

        for (i = 0, cnt = 0; i < n; i++)
        {
            if(str[i] == '0')
                cnt++;
            else
            {
                mxz = max(mxz, cnt);
                cnt = 0;
            }
        }
        mxz = max(mxz, cnt);
        cnt = 0;
        long long zero = 0;
        zero = count(str.begin(), str.end(), '0');
        cout << max(max((mxo * mxo), (mxz * mxz)), (zero * (n - zero))) << '\n';

    }

    return 0;
}

