#include<iostream>
#include<string>
using namespace std;
int main()
{
    string plyrs, result = "NO";
    int cnt = 0, cnt1 = 0;

    cin >> plyrs;
    for(int i = 0; i< plyrs.length(); i++)
    {
        if(plyrs[i] == 49) /*it's just the ASCII value of one.
                            Here we can use '1' (one with single quotation)as well*/
        {
            cnt1 = 0;
            cnt++;
            if(cnt == 7)
            {
                result = "YES";
                break;

            }
        }
        else if(plyrs[i] == 48)
        {
            cnt = 0;
            cnt1++;
            if(cnt1 == 7)
            {
                result = "YES";
                break;
            }

        }
    }
    cout << result;

}
