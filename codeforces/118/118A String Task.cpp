#include<iostream>
using namespace std;
int main()
{
    string str, result;
    cin >> str;
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]!='A' && str[i]!='E' && str[i]!='I' && str[i]!='O' && str[i]!='U' && str[i]!='Y' && str[i]!='a' && str[i]!='e' && str[i]!='i' && str[i]!='o' && str[i]!='u' && str[i]!='y' )
        {
            result += ".";
            result += (char) tolower(str[i]);
        }
    }
    cout << result;
}
