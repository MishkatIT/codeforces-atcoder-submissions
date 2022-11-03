/*
    author    : MishkatIT
    created   : Friday 2022-11-04-04.20.05
    problem   : 230 B. T-primes
*/
#include<iostream>
#include<set>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);using namespace std;
#define int int64_t
using namespace std;
int ar[(int)1e6+10];
set<int> tprime;
void Tprimes()
{
    tprime.insert(4);
    for(int i=3;i<(int)1e6+1;i+=2)
    {
        if(ar[i]==0)
        {
            tprime.insert(i*i);
            for(int j=i;j<=1e6;j+=i)
            {
                ar[j]=1;
            }
        }
    }
}
int32_t main()
{
    fio;
    int n;
    cin >> n;
    Tprimes();
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(tprime.find(x) != tprime.end())
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}


