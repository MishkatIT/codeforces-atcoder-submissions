/*
    author    : MishkatIT
    created   : Monday 2023-04-03-21.07.54
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
vector<int> v (32768 + 10);
void pre(void)
{
    for (int i = 1; i < 32768; i++)
    {
        int temp = 32768 - i;
        int n = i;
        int cnt = 0;
        while(n != 0)
        {
            n = (n * 2) % 32768;
            cnt++;
        }
        v[i] = min(temp, cnt);
        for (int j = i - 1; j >= max(0, i - 15); j--)
        {
            v[j] = min(v[j], v[i] + (i - j));
        }
    }
}

int main()
{
    fio;
    pre();
    int n;
    cin >> n;
    while(n--)
    {
        int x;
        cin >> x;
        cout << v[x] << ' ';
    }
    return 0;
}

