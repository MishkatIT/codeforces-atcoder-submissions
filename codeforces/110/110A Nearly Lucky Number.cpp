#include<iostream>
#include<string>
using namespace std;
int main()
{
    string num;
    int cnt = 0, res = 0;
    cin >> num;

    for (int i = 0; i<num.length(); i++)
    {
        if (num[i]== '4' || num[i]== '7')
            cnt++;

    }
    while(cnt!=0)
    {
        if(cnt % 10 == 4 || cnt % 10 == 7)
        {
            res++;
            cnt /= 10;
        }
        else
            goto ending;
    }

    if(res > 0)
        cout << "YES";
    else
ending:
        cout << "NO";


}
