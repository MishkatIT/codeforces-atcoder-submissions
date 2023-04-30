/*
    author    : MishkatIT
    created   : Sunday 2023-04-30-23.26.53
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
        int j = n - 1;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            while(str[j] != '0' && j > 0)
                j--;
            if(j <= i)
                break;
            if(str[i] == '1')
            {
                v.push_back(i + 1);
                v.push_back(j + 1);
                j--;
            }
        }
        int len = v.size();
        cout << (len > 0) << '\n';
        sort(v.begin(), v.end());
        for (int i = 0; i < len; i++)
        {
            if(i == 0)
                cout << len << ' ';
            cout << v[i] << " \n"[i == len - 1];
        }
    }
    return 0;
}

