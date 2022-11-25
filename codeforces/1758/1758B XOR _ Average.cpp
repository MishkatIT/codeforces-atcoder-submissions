/*
    author    : MishkatIT
    created   : Friday 2022-11-25-22.36.20
    problem   : B. XOR = Average
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
        if(n & 1)
            while(n--)
                cout << '7' << ' ';
        else
        {
            cout << "1 3 ";
            n -= 2;
            while(n--)
                cout << '2' << ' ';
        }
        cout << '\n';
    }

    return 0;
}



