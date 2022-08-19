#include<iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 2; i <= n; cout << " ", i++)
        {
            cout << i;
        }
        cout << "1" << endl;
    }
}
