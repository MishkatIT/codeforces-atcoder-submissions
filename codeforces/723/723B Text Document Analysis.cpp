/*
    author    : MishkatIT
    created   : Friday 2022-11-11-23.40.03
    problem   : 723 B. Text Document Analysis
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    string str;
    cin >> str;
    int mxlen = 0;
    int words = 0;
    int cnt = 0;
    int temp = 0;
    for(int i = 0; i < n; i++)
    {
        if(str[i] == '(')
        {
            cnt = 0;
            for(i++; i < n; i++)
            {
                if(str[i] != '_')
                {
                    if(str[i] == ')')
                    {
                        break;
                    }
                    else
                    {
                        temp++;
                    }
                }
                else
                {
                    if(temp > 0)
                        words++;
                    temp = 0;
                }
            }
            if(temp > 0)
                words++;
            temp = 0;
        }
        else
        {
            if(str[i] != '_')
            {
                cnt++;
                mxlen = max(mxlen, cnt);
            }
            else
                cnt = 0;
        }
    }

    cout << mxlen << ' ' << words;

    return 0;
}



