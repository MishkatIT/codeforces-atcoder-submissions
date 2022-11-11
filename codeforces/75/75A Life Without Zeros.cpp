/*
    author    : MishkatIT
    created   : Saturday 2022-11-12-04.08.05
    problem   : 75 A. Life Without Zeros v2
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

long long zeroless(long long temp)
{
    string str;
    while(temp)
    {
        if(temp % 10 != 0)
        {
            str.push_back((temp % 10) + '0');
        }
        temp /= 10;
    }
    reverse(str.begin(), str.end());
    return stoi(str);
}
int main()
{
    fio;
    long long a, b;
    cin >> a >> b;
    long long c = a + b;
    cout << (zeroless(a) + zeroless(b) == zeroless(c) ? "YES" : "NO") << '\n';
    return 0;
}
