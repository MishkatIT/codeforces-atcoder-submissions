/*
    author    : MishkatIT
    created   : Sunday 2023-02-19-02.56.03
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;

int digit (int n)
{
    int sum = 0;
    string str = to_string(n);
    for (auto &i: str)
    {
        sum += i - '0';
    }
    return sum;
}

int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= 101; i++)
    {
        if(digit(n - i) == i)
        {
            v.push_back(n - i);
        }
    }
    cout << (int)v.size() << '\n';
    sort(v.begin(), v.end());
    for(auto &i: v)
    {
        cout << i << '\n';
    }
    cout << '\n';
    return 0;
}

