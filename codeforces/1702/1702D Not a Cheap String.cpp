/*
    author    : MishkatIT
    created   : Thursday 2022-11-03-05.36.22
    problem   : D. Not a Cheap String
*/
#include<iostream>
#include<string>
#include<map>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        string s;
        s = str;
        long long p;
        cin >> p;
        char c = 'a';
        map<char, int> mp;
        for (int i = 0; i < 26; i++) // initializing a to z
        {
            mp[c];
            c++;
        }
        sort(s.begin(), s.end());
        int temp;
        for (int i = 0; i < s.length(); i++) // storing the strings characters
        {
            temp = s[i] - 'a' + 1;
            if(temp <= p)
            {
                mp[s[i]]++;
                p -= temp;
            }
            else if(p == 0)
                break;
        }
        bool ok = false;
        for (int i = 0; i < str.length(); i++)
        {
            if(mp[str[i]] > 0)
            {
                cout << str[i];
                ok = true;
                mp[str[i]]--;
            }
        }
        if(!ok)
            cout << "";
        cout << '\n';
//        long long temp = 0;
//        bool ok = false;

//        for(auto i: mp)
//        {
////            temp++;
//            if(i.second > 0)
//            {
//                for (int j = 0; j <= i.second; j++)
//                {
//                    if (temp <= p)
//                    {
//                        ok = true;
//                        p -= temp;
//                        i.second--;
//                        cout << i.first;
//                    }
//                    else break;
//                }
//            }
//        }
//        if(!ok)
//            cout << "";
//        cout << '\n';

//        string str;
//        cin >> str;
//        long long p;
//        cin >> p;
//        char c = 'a';
//        map<char, int> mp;
//        for (int i = 0; i < 26; i++) // initializing a to z
//        {
//            mp[c];
//            c++;
//        }
//        for (int i = 0; i < str.length(); i++) // storing the strings characters
//            mp[str[i]]++;
//        long long temp = 0;
//        bool ok = false;
//
//        for(auto i: mp)
//        {
//            temp++;
//            if(i.second > 0)
//            {
//                for (int j = 0; j <= i.second; j++)
//                {
//                    if (temp <= p)
//                    {
//                        ok = true;
//                        p -= temp;
//                        i.second--;
//                        cout << i.first;
//                    }
//                    else break;
//                }
//            }
//        }
//        if(!ok)
//            cout << "";
//        cout << '\n';

    }

    return 0;
}

