/*
    author    : MishkatIT
    created   : Sunday 2022-10-23-19.57.06
    problem   : 1732 B. Ugu
*/
#include<iostream>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0); cout.tie(0);
using namespace std;
string shorten(string str);
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        string str;
        cin >> n >> str;
        str =  shorten(str);
        if(str[0]=='1')
            cout << (long long)str.length()-1 << '\n';
        else if(str.length()==1 && str[0]=='0')
            cout << "0" << '\n';
        else
            cout << (long long)str.length()-2 << '\n';
    }

    return 0;
}
string shorten(string str)
{
    for(int i=0; i<str.length();)
        if(str[i]==str[i+1])
            str.erase(str.begin()+i);
        else
            i++;
    return str;
}

