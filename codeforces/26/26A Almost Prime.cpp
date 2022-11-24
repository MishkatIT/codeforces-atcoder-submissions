/*
    author    : MishkatIT
    created   : Wednesday 2022-11-23-22.43.14
    problem   : 26 A. Almost Prime
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<int> v;
void sieve(int n)
{
    int prime[n];
    memset(prime, 0, sizeof(prime));
    for (int i = 2; i * i <= n; i++)
    {
        if(prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for(int i = 2; i <= 3000; i++)
    {
        if(prime[i] == 0)
            v.push_back(i);
    }
//    for (auto i: v)
//        cout << i << ' ' ;
}

int primeFact (int n)
{
    int cnt = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(n % v[i] == 0)
            cnt++;
        if(cnt > 2)
            break;
        if(v[i] > (n / 2) + 1)
            break;
    }
    return (cnt == 2? 1 : 0);
}

int main()
{
    fio;
    sieve(3000);
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 6; i <= n; i++)
    {
        if(primeFact(i))
            cnt++;
    }
    cout << cnt;
    return 0;
}



