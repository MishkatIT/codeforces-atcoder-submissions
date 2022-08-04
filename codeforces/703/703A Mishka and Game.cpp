#include <iostream>
using namespace std;
int round, v1, v2, mishka, chris;
int main()
{
    cin >> round;
    for (int i = round; i > 0; i--)
    {
        cin >> v1 >> v2;
        if (v1 > v2)
            mishka++;
        else if(v1 < v2)
            chris++;

    }
    if (mishka > chris)
        cout << "Mishka";

    else if (chris > mishka)
        cout << "Chris";

    else
        cout << "Friendship is magic!^^";

}
