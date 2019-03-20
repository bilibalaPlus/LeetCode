#include "countBinarySubstrings.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    Solution sl = Solution();
    cout << sl.countBinarySubstrings("00110011") << endl;
    cout << sl.countBinarySubstrings("10101") << endl;

    return 0;
}
