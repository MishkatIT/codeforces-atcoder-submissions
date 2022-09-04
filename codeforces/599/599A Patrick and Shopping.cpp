#include<iostream>
#define nl "\n"
#define forn(i) for (int i=0; i < len; i++)
using namespace std;
int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;

    int r1 = d1+d2+d3;
    int r2 =  min(r1, (d1+d2) * 2);
    int r3 =  min(r1, (d1+d3) * 2);
    int r4 = min(r1, (d2+d3) * 2);

    cout << min(min(r3, r4), min(r1, r2));

}

