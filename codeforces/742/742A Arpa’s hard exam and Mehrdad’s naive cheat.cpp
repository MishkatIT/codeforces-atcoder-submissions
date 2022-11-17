/*
    author    : MishkatIT
    created   : Thursday 2022-11-17-18.53.05
    problem   : 742 A. Arpa’s hard exam and Mehrdad’s naive cheat
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

long long binaryExp(int power)
{
    long long result = 1;
    int mod = 10;
    long long base = 8;
    while(power)
    {
        if(power % 2)
            result = ((result % mod) * (base % mod)) % mod;
        base = ((base % mod) * (base % mod)) % mod;
        power /= 2;
    }
    return result;
}
int main()
{
    fio;
    int power;
    cin >> power;
    cout << binaryExp(power);

    return 0;
}



