/*
    author    : MishkatIT
    created   : Sunday 2022-10-16-02.06.12
    problem   : 1398 B. Substring Removal Game
*/
#include<iostream>
#include<vector>
#include<string>
#include<numeric>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    string str;
    int t;
    cin >> t;
    while(t--)
    {
        vector<int>v;
        int cnt =0;
        cin >> str;
        for(int i=0; i<str.length(); i++)
        {
            if(str[i]=='1')
                cnt++;
            else
            {
                if(cnt>0)
                    v.push_back(cnt);
                cnt=0;
            }

        }
        if(cnt>0)
            v.push_back(cnt);

        sort(v.begin(), v.end());
        reverse(v.begin(), v.end());
        int ans=0;
        for(auto i=v.begin(); i<v.end(); i+=2)
            ans+=*i;
        cout << ans << '\n';
    }

    return 0;
}

