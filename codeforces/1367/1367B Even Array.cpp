/*
    author    : MishkatIT
    created   : Friday 2022-11-04-05.16.10
    problem   : 1367 B. Even Array
*/
#include<iostream>
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
        int a = 0, b = 0, num;
        for(int i = 0 ; i < n; i++)
        {
            cin >> num;
            if(i % 2 != num % 2)
            {
                if(i % 2 == 0)
                    a++;
                else
                    b++;
            }
        }

        if(a == b)
            cout << a << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}

