/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-23.32.45
    problem   : 1720 A. Burenka Plays with Fractions
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
st:
    while(t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if((b*c)==(a*d))
        {
            cout << "0" << '\n';
            goto st;
        }
        if(a==0 || c==0)
        {
            cout << "1" << '\n';
            goto st;
        }
        if((b*c)%(a*d)==0 || (a*d)%(b*c)==0)
        {
            cout << "1" << '\n';
            goto st;
        }
        cout << "2" << '\n';
    }

    return 0;
}

