/*
    author    : MishkatIT
    created   : Tuesday 2022-11-15-15.33.43
    problem   : 1593 A. Elections
*/
#include<iostream>
#include<algorithm>
#include<vector>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        int n = 3;
        vector<int> v;
        int temp;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        int mx = *max_element(v.begin(), v.end());
        int cnt = count(v.begin(), v.end(), mx);
        if(v[0] == v[1] && v[1] == v[2])
        {
            while(n--)
                cout << 1 << ' ';
            cout << '\n';
        }
        else
        {
            for (int i = 0; i < 3; i++)
            {
                if(v[i] != mx)
                    cout << mx - v[i] + 1 << ' ';
                else
                    cout << (cnt > 1 ? 1 : 0) << ' ';
            }
            cout << '\n';
        }

    }

    return 0;
}



