/*
    author    : MishkatIT
    created   : Tuesday 2022-10-11-02.46.47
    problem   : 831 B. Keyboard Layouts
*/
#include<iostream>
#include<map>
#include<cctype>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    map<char, char>mp;
    for(int i=0; i<26; i++)
        mp[s1[i]] = s2[i];
    for(int i=0; i<s3.length(); i++)
    {
        if(!isalpha(s3[i]))
            cout << s3[i];
        else
        {
            if(isupper(s3[i]))
            {
                cout << (char)toupper(mp[s3[i]+32]);
            }
            else
                cout << mp[s3[i]];
        }
    }
    return 0;
}



