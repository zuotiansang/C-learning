#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
    std::cout << "Hello World!\n";
    //dif machine have int 4 for 64
    cout << sizeof(int) << endl;
    cout << sizeof(char) << endl;

    cout << sizeof(long) << endl;

    //pointer test
    int x[10];
    int* p = x;
    cout << sizeof(p) / sizeof(*p) << endl;

    cout << (sizeof 1 < 2) << endl;

    //static_cast
    const char* cp = "Hello,world!";

    cout << cp << endl;
    //cast try
    int i = 10;
    double j = 2.0;
    int fr = i *= static_cast<int>(j);

    cout << fr << endl;

    //verify goto expr
    int inp;
    cout << "请输入一个整数:";
    cin >>inp;
    if (inp < 10)
    {
        goto deal_under_10;
    }
    else
    {
        goto deal_uper_10;
    }
    deal_under_10:
        cout << "结果小于10!\n";


    deal_uper_10:
        cout << "结果大于等于10!\n";

    //block expr
    {
        int out1 = 1;
        {
            int iner1 = 1;
        }
    }
    cout << "Block is significant!\n";
    //attention it's truth
    //cout << out1 << endl;


/*
deal_under_10:
    cout << "结果小于10!\n";


deal_uper_10:
    cout << "结果大于等于10!\n";
*/
return 0;
}