/*
    author    : MishkatIT
    created   : Thursday 2023-03-09-17.53.49
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;
    string str;
    cin >> str;
    int ans = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(str[i] == 'x')
            if(cnt < 2)
                cnt++;
            else
                ans++;
        else cnt = 0;

    }
    cout << ans;
    return 0;
}

