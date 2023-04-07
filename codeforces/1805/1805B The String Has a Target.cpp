/*
    author    : MishkatIT
    created   : Friday 2023-04-07-19.58.53
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
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
        int index = 0;
        for (int i = 1; i < n; i++)
        {
            if(str[i] <= str[index])
                index = i;
        }
        cout << str[index] << str.substr(0, index) << str.substr(index + 1) << '\n';
    }
    return 0;
}

