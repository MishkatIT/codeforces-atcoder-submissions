/*
    author    : MishkatIT
    created   : Tuesday 2022-10-11-20.53.06
    problem   : 1741 A. Compare T-Shirt Sizes
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    string str1, str2;
    while(t--)
    {
        cin >> str1 >> str2;
        int len1 = str1.length();
        int len2 = str2.length();
        if((str1[len1-1]=='L') && (str2[len2-1]=='L'))
        {
            if(len1>len2)
                cout << ">" << '\n';
            else if(len1<len2)
                cout << "<" << '\n';
            else
                cout << "=" << '\n';
        }
        else if((str1[len1-1]=='L') || (str2[len2-1]=='L'))
        {
            if(str1[len1-1]=='L')
                cout << ">" << '\n';
            else if(str2[len2-1]=='L')
                cout << "<" << '\n';
            else
                cout << "=" << '\n';
        }
        else
        {
            if(str1[len1-1]-str2[len2-1] >0)
                cout << "<" << '\n';

            else if(str1[len1-1]-str2[len2-1] <0)
                cout << ">" << '\n';
            else
            {
                if(len1>len2)
                    cout << "<" << '\n';
                else if(len1<len2)
                    cout << ">" << '\n';
                else
                    cout << "=" << '\n';
            }

        }
    }
}



