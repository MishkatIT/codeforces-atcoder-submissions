/*
    author    : MishkatIT
    created   : Wednesday 2022-10-12-02.37.51
    problem   : 746 B. Decoding
*/
#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int len;
    string str;
    cin >> len >> str;
    if(len==1)
        cout << str[0];
    else
    {
        vector<char>v;
        v.push_back(str[len-2]);
        v.push_back(str[len-1]);

        int cnt=2;
        for(int i=len-3; i>=0; i--)
        {
            v.insert(v.begin()+(cnt/2), str[i]);
            cnt++;

        }
        for(int i=0; i<v.size(); i++)
            cout << v[i];
    }

    return 0;
}



