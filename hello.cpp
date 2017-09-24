#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    cout << "hello !" << endl;
    printf("xxx");
    int a = 0;
    for(int i = 0; i < 10; i++)
    {
        a += i;
    }

    float d_num;
    cout << sizeof(d_num) << endl;

    return 0;
}