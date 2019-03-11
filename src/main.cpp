#include "Atoi.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    Solution sl = Solution();
    cout << sl.myAtoi("42") << endl;
    cout << sl.myAtoi("  -42") << endl;
    cout << sl.myAtoi("42 with words") << endl;
    cout << sl.myAtoi("words with 42") << endl;
    cout << sl.myAtoi("-91283472332") << endl;
    cout << sl.myAtoi("-2147483648") << endl;
    return 0;
}
