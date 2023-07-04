/*
    author    : MishkatIT
    created   : Tuesday 2023-07-04-17.46.26
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
using ll = long long;
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
const ll inf = 1e9;
const ll linf = 1e18;

int sum, temp;
void func(int len)
{
    temp = 0;
    for (int i = 0; i < len; i++)
    {
        int val;
        cin >> val;
        temp += val;
        if(temp > 0)
        {
            sum += temp;
            temp = 0;
        }
    }
}
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        sum = 0;
        int x;
        cin >> x;
        func(x);
        cin >> x;
        func(x);
        cout << sum << '\n';
    }
    return 0;
}
