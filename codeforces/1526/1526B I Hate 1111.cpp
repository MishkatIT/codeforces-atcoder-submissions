/*
    author    : MishkatIT
    created   : Friday 2022-11-25-17.26.01
    problem   : 1526 B. I Hate 1111
*/
#include<iostream>
#include<algorithm>
#include<functional>
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
        bool ok = false;
        while(n > 0)
        {
            if(!(n % 11) || !(n % 111))
            {
                ok = true;
                break;
            }
            else
                n -= 111;
        }
        cout << (ok ? "YES" : "NO") << '\n';
    }
    return 0;
}



