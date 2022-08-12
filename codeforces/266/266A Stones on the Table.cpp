#include<iostream>
using namespace std;
int main ()
{
    int count = 0;
    int s;
    cin >> s;
    char str[s];
    cin >> str[0];
    {
        for (int i=1; i < s; i++)
        {
            cin >> str[i];
            if (str[i-1] == str[i])
            {
                count++;
            }
        }
    }
    cout << count << endl;
}
