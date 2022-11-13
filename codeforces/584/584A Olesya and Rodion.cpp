/*
    author    : MishkatIT
    created   : Monday 2022-11-14-04.08.12
    problem   : 584 A. Olesya and Rodion
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n, t;
    cin >> n >> t;
    if(!(n == 1 && t == 10))
    {
        if (t == 10)
        {
            cout << 1;
            t = 0;
            n--;
        }
        for (int i = 0; i < n; i++)
            cout << t;
    }
    else
        cout << -1;
    return 0;

}



