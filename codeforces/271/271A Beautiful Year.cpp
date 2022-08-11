#include <iostream>
using namespace std;
int main()
{
    int y, digit1, digit2, digit3, digit4;
    cin >> y;
    while (1)
    {
        y += 1;
        digit1 = y / 1000;
        digit2 = y / 100 % 10;
        digit3 = y / 10 % 10;
        digit4 = y % 10;
        if (digit1 != digit2 && digit1 != digit3 && digit1 != digit4 && digit2 != digit3 && digit2 != digit4 && digit3 != digit4)
        {
            cout << y << endl;
            break;

        }
    }

}
