/*
    author    : MishkatIT
    created   : Saturday 2022-11-12-03.12.25
    problem   : 75 A. Life Without Zeros
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string a, b, c;
    cin >> a >> b;
    long long temp = stoi(a)+ stoi(b);
    for(int i = 0; temp != 0; i++)
    {
        if(temp % 10 != 0)
        {
            c.push_back((temp % 10) + '0');
        }
        temp /= 10;
    }
    reverse(c.begin(), c.end());
    a.erase(remove(a.begin(),a.end(), '0'),a.end());
    b.erase(remove(b.begin(),b.end(), '0'),b.end());
    if((long long)stoi(a) + stoi(b) == stoi(c))
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
        
    return 0;
}



