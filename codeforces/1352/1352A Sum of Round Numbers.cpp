/*
    author    : MishkatIT
    created   : Saturday 2022-11-05-02.15.13
    problem   : 1352 A. Sum of Round Numbers
*/
#include<iostream>
#include<vector>
#include<cmath>
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
        vector<double> v;
        cin >> str;
        int cnt = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if(str[i] != '0')
            {
                cnt++;
                v.push_back((str[i] - '0') * pow(10, (double)(str.length() - i - 1)));
            }
        }
        cout << cnt << '\n';
        for(auto i: v)
            cout << i << ' ' ;
        cout << '\n';

    }

    return 0;
}

