/*
    author    : MishkatIT
    created   : Monday 2022-12-12-20.52.43
    problem   : A. Extremely Round
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<int> v(999999 + 1);
void pre(void)
{
    int cnt = 0;
    int i;
    for (i = 1; i <= 999999 ; i++)
    {
        int n = i;
        int sum = 0;
        while(n)
        {
            if((n % 10) != 0)
                sum++;
            n /= 10;
        }
        if (sum == 1)
            v[i] = v[i - 1] + 1;
        else
            v[i] = v[i - 1];
    }
}

int main()
{
    fio;
    pre();
    int t;
    cin >> t;
    while(t--)
    {
        int num;
        cin >> num;
        cout << v[num] << '\n';
    }
    return 0;
}
