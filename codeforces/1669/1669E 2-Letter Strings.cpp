/*
    author    : MishkatIT
    created   : Monday 2023-01-16-14.19.05
    problem   : 1669 E. 2-Letter Strings
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
        vector<string> v(n);
        map<string, long long> all;
        map<char, long long> first;
        map<char, long long> second;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            all[v[i]]++;
            first[v[i][0]]++;
            second[v[i][1]]++;
        }
        long long cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += max((long long)0, first[v[i][0]] - all[v[i]]);
            cnt += max((long long)0, second[v[i][1]] - all[v[i]]);
            if(all[v[i]])
                all[v[i]]--;
            if(first[v[i][0]])
                first[v[i][0]]--;
            if(second[v[i][1]])
                second [v[i][1]]--;
        }
        cout << cnt << '\n';
    }
    return 0;
}

