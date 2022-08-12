#include<iostream>
using namespace std;
int main()
{
    int a, b, y = 0;
    cin >> a >> b;
    while(1)
    {
        if(a > b)
        {
            break;
        }
        a = a * 3;
        b = b * 2;
        y++;
    }
    cout << y;
}
