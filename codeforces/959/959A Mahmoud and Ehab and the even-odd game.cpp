/*
    author    : MishkatIT
    created   : Wednesday 2022-10-12-19.55.27
    problem   : 959 A. Mahmoud and Ehab and the even-odd game
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int num;
    cin >> num;
    cout << (num%2==0?  "Mahmoud" : "Ehab");

    return 0;
}



