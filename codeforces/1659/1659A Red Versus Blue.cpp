/*
    author    : MishkatIT
    created   : Saturday 2022-10-15-23.56.54
    problem   : 1659 A. Red Versus Blue
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t, n, r, b;
    cin >> t;
    while(t--)
    {
        cin >> n >> r >> b;
        int cr = r/(b+1);
        int cb = r%(b+1);
        string str;
        for(int i=0; i<(b+1-cb); i++)
        {
            string st(cr, 'R');
            str+=st;
            str+='B';
        }
        for(int i=0; i<cb; i++)
        {
            string st(cr+1, 'R');
            str+=st;
            str+='B';
        }
        str.pop_back();

        cout << str << '\n';
    }

    return 0;
}

