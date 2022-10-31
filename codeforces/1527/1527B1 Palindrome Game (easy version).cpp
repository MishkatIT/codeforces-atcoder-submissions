/*
    author    : MishkatIT
    created   : Monday 2022-10-31-19.52.55
    problem   : 1527 B1. Palindrome Game (easy version)
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int zero = count(str.begin(), str.end(), '0');
        bool alice_d = false;
        if(zero > 1 && zero % 2 == 1)
            alice_d = true;
        cout << (alice_d ? "ALICE" : "BOB") << '\n';
    }

    return 0;
}

