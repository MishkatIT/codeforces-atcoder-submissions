/*
    author    : MishkatIT
    created   : Monday 2022-11-14-04.08.12
    problem   : 584 A. Olesya and Rodion
*/
#include<iostream>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string n, t;
    cin >> n >> t;
    if(stoi(n) < t.length())
    {
        cout << -1;
        return 0;
    }
    cout << t;
    for(int i = 0; i < stoi(n) - t.length(); i++)
        cout << 0;
    return 0;
}



