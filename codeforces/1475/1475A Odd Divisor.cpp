#include<iostream>
#define nl "\n"
#define forn(i) for (int i=3; i <= num; i+=2)
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main()
{
    fio;
    long long int t, num;
    cin >> t;
    while(t--)
    {
        cin >> num;
        if((num&(num-1)))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }
}

