/*
    author    : MishkatIT
    created   : Wednesday 2022-10-26-23.45.44
    problem   : 847 G. University Classes
*/
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    vector<int>v{0, 0, 0, 0, 0, 0, 0};
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
        for(int i=0; i<7; i++)
            v[i]+=str[i]-'0';
    }
    cout << *max_element(v.begin(), v.end());
    return 0;
}


