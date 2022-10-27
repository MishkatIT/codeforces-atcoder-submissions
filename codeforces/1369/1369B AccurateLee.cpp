/*
    author    : MishkatIT
    created   : Friday 2022-10-28-02.52.24
    problem   : 1369 B. AccurateLee
*/
#include<iostream>
//#include<deque>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
st:
    while(t--)
    {
        long long n;
        cin >> n;
        string str;
        cin >> str;
        if(n == 1)
        {
            cout << str;
            cout << '\n'; // this imposter??!!
            goto st;
        }
        long long cnt = n;
        for(int i=0; i<n; i++)
        {
            if(str[i] == '0')
            {
                cout << '0';
                cnt--;
            }
            else break;

        }
        string s;
        reverse(str.begin(), str.end());
        for(int i=0; i<n; i++)
        {
            if(str[i] == '1')
            {
                s.push_back('1');
                cnt--;
            }
            else break;

        }
        if((long long) cnt != 0 )
            s.insert(s.begin(), '0');

        cout << s << '\n';


    }

    return 0;
}

