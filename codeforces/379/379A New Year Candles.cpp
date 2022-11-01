/*
    author    : MishkatIT
    created   : Wednesday 2022-11-02-00.25.54
    problem   : 379 A. New Year Candles
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int a, b;
    cin >> a >> b;
    int temp = 0;
    int hour = 0;
    for (int i = 0; i < a; i++)
    {
        hour++;
        temp++;
        if(temp == b)
        {
            a++;
            temp = 0;
        }
    }
    cout << hour;

    return 0;
}

