/*
    author    : MishkatIT
    created   : Tuesday 2022-10-11-23.52.28
    problem   : 749 A. Bachgold Problem
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int num;
    cin >> num;
    if(num%2)
    {
        num-=3;
        int ans=(num/2)+1;
        cout << ans << '\n';
        for(int i=1; i<ans; i++)
            cout << "2 ";
        cout << "3";
    }
    else
    {
        cout << num/2 << '\n';
        for(int i=0; i<num/2; i++)
            cout << "2 ";
    }
    return 0;
}



