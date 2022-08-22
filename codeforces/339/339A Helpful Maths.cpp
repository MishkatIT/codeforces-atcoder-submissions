#include<iostream>
using namespace std;
int main()
{
    string str;
    cin >> str;
    int leng = str.length();
    for(int i=0; i<leng; i++)
    {
        if(str[i] != '+')
        {
           for(int j=i+2; j<leng; j+=2)
           {
               if(str[i] > str[j])
               {
                   swap(str[i], str[j]);
               }
           }
           cout << str[i];
        }
        else
            cout << "+";

    }

}
