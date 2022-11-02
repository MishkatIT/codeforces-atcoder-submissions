/*
    author    : MishkatIT
    created   : Thursday 2022-11-03-03.15.37
    problem   : 1399 A. Remove Smallest
*/
#include<iostream>
#include<vector>
#include<algorithm>
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
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end());
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            if((v[i] - v[i - 1]) > 1)
            {
                ok = false;
                break;
            }
        }
        cout << (ok ? "YES" : "NO") << '\n';

    }
    return 0;
}

