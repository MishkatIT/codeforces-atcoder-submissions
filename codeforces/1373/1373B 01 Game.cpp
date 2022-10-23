/*
    author    : MishkatIT
    created   : Monday 2022-10-24-02.54.12
    problem   : 1373 B. 01 Game
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        int one = count(str.begin(), str.end(), '1');
        int mn = min(one,(int) str.length()-one);
        cout << (mn%2==1 ? "DA" : "NET") << '\n';
    }

    return 0;
}

