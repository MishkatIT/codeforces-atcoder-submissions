
#include <iostream>

using namespace std;

int main()
{
    int wt;
    cin >> wt;
    if (wt % 2 == 0 && wt != 2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
