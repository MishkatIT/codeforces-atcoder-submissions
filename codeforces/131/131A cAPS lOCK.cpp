/*
    author    : MishkatIT
    created   : Friday 2022-10-28-19.20.15
    problem   : 131 A. cAPS lOCK
*/
#include<iostream>
#include<algorithm>
#include<cstring>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

string print (string str)
{
    if(str[0] > 96 )
    {
        for(int i = 1; i < str.length(); i++)
            if (!isupper(str[i]))
                return str;
        transform(str.begin()+1, str.end(), str.begin()+1, ::tolower);
        str[0] =str[0] - 32;
        return str;
    }
    for(auto c: str)
        if (!isupper(c))
            return str;

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;

}
int main()
{
    fio;
    string str;
    cin >> str;
    cout << print(str);

    return 0;
}



