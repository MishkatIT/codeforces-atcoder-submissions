/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-16.20.09
    problem   : 313 A. Ilya and Bank Account
*/
#include<iostream>
#include<algorithm>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    string num;
    cin >> num;
    if(num<"0")
    {
        int len = num.length();
        if(num[len-1] > num[len-2])
            num.pop_back();
        else
        {
            swap(num[len-1], num[len-2]);
            num.pop_back();
        }
    }
    if(num=="-0")
        num="0";

    cout << num;
    return 0;
}

