#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n, per, sum = 0, i;
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        cin >> per;
        sum += per;
    }
    cout << setprecision(16) << (double)sum/ n;
}
