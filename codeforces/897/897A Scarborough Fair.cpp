/*
    author    : MishkatIT
    created   : Wednesday 2022-10-12-23.05.00
    problem   : 897 A. Scarborough Fair
*/
#include<iostream>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int n,m, l, r;
    char c1, c2;
    string str;
    cin >> n >> m >> str;
    while(m--)
    {
        cin >> l >> r >> c1 >> c2;
        for(int i=l; i<=r; i++)
            if(c1==str[i-1])
                str[i-1]=c2;

    }
    for(char c: str)
        cout << c;

    return 0;
}



