/*
    author    : MishkatIT
    created   : Friday 2022-11-04-02.19.33
    problem   : 520 A. Pangram
*/
#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    set<char> str;
    char c;
    for(int i = 0; i < n; i++)
    {
        cin >> c;
        str.insert(tolower(c));
    }
    cout << (str.size() == 26 ? "YES" : "NO") ;
//    int n;
//    cin >> n;
//    string str;
//    cin >> str;
//    transform(str.begin(), str.end(), str.begin(), :: tolower);
//    set<char>st;
//    for (int i = 0; i < n; i++)
//    {
//        st.insert(str[i]);
//    }
//    char c = 'a';
//    string s;
//    for (int i = 0; i < 26; i++)
//        s += c++;
//    int x = 0;
//    for(auto i: st)
//        {
//            if(i != s[x])
//                {
//                    cout << "NO" ;
//                    return 0;
//                }
//                x++;
//
//        }
//        cout << (x > 25? "YES" : "NO") << '\n';

//    sort(str.begin(), str.end());
//    int cnt = 0;
//    for (int i = 0; i < n - 1; i++)
//    {
//        if(str[i + 1] - str[i] > 1)
//        {
//            cout << "NO";
//            return 0;
//        }
//        else
//            cnt += str[i + 1] - str[i];
//    }
//    cout << (cnt >= 25? "YES" : "NO") << '\n';

//    map<char, int> mp;
//    char c = 'a';
//    for (int i = 0; i < 26; i++)
//    {
//        mp[c];
//        c++;
//    }
//
//    for (int i = 0; i < n; i++)
//    {
//        mp[str[i]]++;
//    }
//    for(auto i: mp)
//    {
//        if (i.second < 1)
//        {
//            cout << "NO" << '\n';
//            return 0;
//        }
//    }
//    cout << "YES" << '\n';

    return 0;
}

