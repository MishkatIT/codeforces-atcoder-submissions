#include <iostream>
using namespace std;
int t, n;
string s;
bool b[2];
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> s;
        b[0] = b[1] = 0;
        for (int i = 0; i < n; i++)
        {
            b[i + 1 & 1] |= s[i] & 1 ^ i & 1;
        }
        cout << (b[n & 1] ^ n & 1) + 1 << '\n';
    }
    return 0;
}
