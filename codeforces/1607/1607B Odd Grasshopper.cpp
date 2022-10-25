/*
    author    : MishkatIT
    created   : Wednesdarem 2022-10-26-02.18.56
    problem   : 1606 B. Odd Grasshopper
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
        long long step, num, rem, temp = 0;
        cin >> num >> step;
        rem = step%4;
        if(rem == 1)
            temp = -step;
        else if(rem == 2)
            temp = 1;
        else if(rem == 3)
            temp = step+1;
        if(num&1)
            cout << num-temp << '\n';
        else
            cout << num+temp << '\n';

    }

    return 0;
}



