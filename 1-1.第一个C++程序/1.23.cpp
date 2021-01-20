#include<iostream>
#include"shudian.h"
using namespace std;
int main()
{
    Sales_item book, flagbook;
    int cnt=0;
    if (cin >> book)
    {
        flagbook = book;
        cnt = 1;
        while (cin>>book)
        {
            if (flagbook.isbn() == book.isbn())
            {
                flagbook += book;
                cnt++;
            }
            else
            {
                cout << flagbook << endl;
                flagbook = book;
                cnt = 1;
            }
        }
        cout << flagbook<< endl;
    }
}