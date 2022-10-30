/*
    author    : MishkatIT
    created   : Sunday 2022-10-30-20.00.21
    problem   : 514 A. Chewbaсca and Number
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    string num;
    cin >> num;
    for(int i = 1; i < num.length(); i++)
    {
        if(num[i] > ('9' - num[i]) + '0')
        {
            num[i] = ('9' - num[i]) + '0';
        }
    }
    if(num[0] != '9')
    {
        if(num[0] > ('9' - num[0]) + '0')
        {
            num[0] = ('9' - num[0]) + '0';
        }
    }
    cout << num;

    return 0;
}
