/*
    author    : MishkatIT
    created   : Saturday 2022-11-05-00.28.23
    problem   : 1747 C. Swap Game
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
        long long n;
        cin >> n;
        int temp;
        vector<int>v;
        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        cout << (v[0] == *min_element(v.begin(), v.end())? "BOB" : "Alice") << '\n';
    }

    return 0;
}

