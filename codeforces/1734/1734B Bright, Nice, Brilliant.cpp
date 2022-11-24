/*
    author    : MishkatIT
    created   : Thursday 2022-11-24-13.52.50
    problem   : 1734 B. Bright, Nice, Brilliant
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
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <=i; j++)
            {
                if(j == 1 || j == i)
                    cout << "1" << ' ';
                else
                    cout << "0" << ' ';
            }
            cout << '\n';
        }
    }

    return 0;
}



