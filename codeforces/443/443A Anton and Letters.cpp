/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-04.50.01
    problem   : 443 A. Anton and Letters
*/
#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
#include<vector>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    getline(cin, str);
    vector<char>v;
    for(int i=0; i<str.length(); i++)
    {
        if(isalpha(str[i]))
            v.push_back(str[i]);
    }
    int uni = 0;
    sort(v.begin(), v.end());
    uni = unique(v.begin(), v.end())-v.begin();
    cout << uni;

    return 0;
}

