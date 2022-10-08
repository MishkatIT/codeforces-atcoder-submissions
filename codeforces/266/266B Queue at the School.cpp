#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int len, sec;
    string str;
    cin >> len >> sec >> str;
    while(sec--)
    {
        for(int i=0; i<len; i++)
            if(str[i]=='B' && str[i+1]=='G')
            {
                swap(str[i], str[i+1]);
                i++;
            }
    }
    cout << str;
    return 0;
}
