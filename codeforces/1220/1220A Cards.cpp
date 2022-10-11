/*
    author    : MishkatIT
    created   : Wednesday 2022-10-12-03.29.05
    problem   : 1220 A. Cards
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    string str;
    cin >> n >> str;
    int cnt = count(str.begin(), str.end(), 'n');
    int zero=(n-cnt*3)/4;
    for(int i=0; i<cnt; i++)
        cout << "1 ";
    for(int i=0; i<zero; i++)
        cout << "0 ";
    return 0;
}



