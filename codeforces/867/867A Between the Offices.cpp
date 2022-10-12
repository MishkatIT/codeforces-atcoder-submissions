/*
    author    : MishkatIT
    created   : Wednesday 2022-10-12-19.44.39
    problem   : 867 A. Between the Offices
*/
#include<iostream>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n, s=0, f=0;
    string str;
    cin >> n >> str;
    for(int i=1; i<n; i++)
    {
        if(str[i]=='S' && str[i-1]=='F')
            f++;
        else if(str[i]=='F' && str[i-1]=='S')
            s++;
    }
    if(s>f)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';

    return 0;
}



