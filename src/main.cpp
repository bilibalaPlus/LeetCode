#include "NQueens.cpp"
#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    Solution sl = Solution();
    for (auto s : sl.solveNQueens(4)) {
        for (auto str : s) {
            cout << str << endl;
        }
        cout << "============================" << endl;
    }

    return 0;
}
