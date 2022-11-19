/*
    author    : MishkatIT
    created   : Sunday 2022-11-20-01.27.36
    problem   : A. Creep
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
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < max(a, b); i++)
        {
            if(i < a)
                cout << '0';
            if(i < b)
                cout << '1';
        }
        cout << '\n';
    }

    return 0;
}



