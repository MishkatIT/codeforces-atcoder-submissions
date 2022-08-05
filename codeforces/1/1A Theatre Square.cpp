#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    unsigned  long long  a, n, m, stones;


    cin >> n >> m >> a;

    if(a >= m && a>= n)
        cout << 1 << endl;

    else
    {
        stones = ceil((double)m/a)*ceil((double)n/a);
        cout << stones << endl;
    }

    return 0;
}
