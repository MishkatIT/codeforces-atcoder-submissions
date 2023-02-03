/*
    author    : MishkatIT
    created   : Friday 2023-02-03-20.53.03
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int ans = 1;
        while(str.size() > 1)
        {
            if(str.front() != str.back())
            {
                str.erase(str.begin());
                str.pop_back();
            }
            else
                break;
        }
        cout << (int)str.size() << '\n';

    }
    return 0;
}
