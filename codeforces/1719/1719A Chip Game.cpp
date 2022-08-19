#include<iostream>
using namespace std;
typedef long long int lli;
int main()
{
    lli t, n1, n2;
    cin >> t;
    while(t--)
    {
        cin >> n1 >> n2;
        if((n1 + n2) % 2 == 0)
            cout << "Tonya" << endl;
        else
            cout << "Burenka" << endl;
    }
}

