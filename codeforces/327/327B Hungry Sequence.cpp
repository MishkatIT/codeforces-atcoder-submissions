/*
    author    : MishkatIT
    created   : Wednesday 2023-02-22-22.01.24
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
const int inf = (1e7);
vector<bool> prime(inf + 10, true);
void sieve(void)
{
    for (int i = 2; i * i <= inf; i++)
    {
        if(prime[i])
        {
            for (int j = i * i; j <= inf; j += i)
            {
                prime[j] = false;
            }
        }
    }
}
int main()
{
    fio;
    sieve();
    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 2; cnt < n; i++)
    {
        if(prime[i])
        {
            cout << i << ' ';
//            cout << '\n';debug(cnt);
            cnt++;
        }
    }
    return 0;
}

