/*
    author    : MishkatIT
    created   : Tuesday 2023-03-28-22.54.15
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
        int n, k;
        cin >> n >> k;
        string str;
        char c = 'a';
        while(n--)
        {
          str += c++;
          if(c - 'a' == k)
            c = 'a';
        }
        cout << str << '\n';
    }
    return 0;
}

