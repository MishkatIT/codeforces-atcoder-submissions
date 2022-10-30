/*
    author    : MishkatIT
    created   : Monday 2022-10-31-02.29.04
    problem   : 688 B. Lovely Palindromes
*/
#include<iostream>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string num;
    cin >> num;
    cout << num;
    reverse(begin(num), end(num));
    cout << num;

    return 0;
}

