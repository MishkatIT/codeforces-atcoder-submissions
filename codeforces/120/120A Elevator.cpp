/*
    author    : MishkatIT
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
string str;
int n;
int main()
{
//    fio;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> str;
    cin >> n;
    if((str == "front" && n == 1) || (str == "back" && n == 2))
        cout << 'L';
    else
        cout << 'R';
    return 0;
}

