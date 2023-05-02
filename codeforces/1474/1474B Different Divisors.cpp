/*
    author    : MishkatIT
    created   : Tuesday 2023-05-02-15.39.04
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
const int N = 1e6;
vector<int> prime;
void sieve(void)
{
    vector<bool> temp(N + 10, true);
    for (int i = 2 * 2; i <= N; i += 2)
    {
        temp[i] = false;
    }
    for (int i = 3; i * i <= N; i += 2)
    {
        if(temp[i])
        {
            for (int j = i * i; j <= N; j += i)
            {
                temp[j] = false;
            }
        }
    }
    for (int i = 2; i <= N; i++)
    {
        if(temp[i])
            prime.push_back(i);
    }
}

int main()
{
    fio;
    sieve();
    int t;
    cin >> t;
    while(t--)
    {
        int d;
        cin >> d;
        int x = d + 1;
        int f1 = lower_bound(prime.begin(), prime.end(), x) - prime.begin();
        int f2 = lower_bound(prime.begin(), prime.end(), (prime[f1] + d)) - prime.begin();

        cout << prime[f1] * prime[f2] << '\n';
    }
    return 0;
}

